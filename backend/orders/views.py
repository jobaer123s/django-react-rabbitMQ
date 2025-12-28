"""REST viewsets powering order endpoints."""

import logging

from celery.exceptions import CeleryError
from rest_framework import mixins, viewsets

from .filters import OrderFilter
from .models import Order
from .serializers import OrderCreateSerializer, OrderSerializer
from .tasks import process_order
from .utils import broadcast_order_update

logger = logging.getLogger(__name__)


class OrderViewSet(mixins.CreateModelMixin, mixins.ListModelMixin, mixins.RetrieveModelMixin, viewsets.GenericViewSet):
    queryset = Order.objects.all().select_related('user')
    serializer_class = OrderSerializer
    filterset_class = OrderFilter
    ordering_fields = ['created_at', 'status']
    lookup_field = 'order_id'
    http_method_names = ['get', 'post']

    def get_serializer_class(self):
        if self.action == 'create':
            return OrderCreateSerializer
        return OrderSerializer

    def perform_create(self, serializer):
        order = serializer.save()
        broadcast_order_update(order)
        try:
            process_order.delay(order.id)
        except CeleryError as exc:
            logger.warning('Celery unavailable, processing order %s inline: %s', order.order_id, exc)
            process_order(order.id)
        except Exception:  # pragma: no cover - defensive guard
            logger.exception('Unexpected error dispatching Celery task; processing inline')
            process_order(order.id)
        return order
