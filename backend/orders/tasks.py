"""Celery tasks that simulate asynchronous order processing."""

from __future__ import annotations

import logging
import time

from celery import shared_task
from django.db import transaction

from .models import Order
from .utils import broadcast_order_update

logger = logging.getLogger(__name__)


@shared_task(name='orders.process-order')
def process_order(order_pk: int) -> str | None:
    """Simulate slow order processing and push websocket updates."""
    try:
        order = Order.objects.get(pk=order_pk)
    except Order.DoesNotExist:  # pragma: no cover - safe guard
        logger.warning('Order %s missing, skipping task', order_pk)
        return None

    with transaction.atomic():
        order.status = Order.Status.PROCESSING
        order.save(update_fields=['status', 'updated_at'])
    broadcast_order_update(order)
    time.sleep(2)

    with transaction.atomic():
        order.status = Order.Status.COMPLETED
        order.save(update_fields=['status', 'updated_at'])
    broadcast_order_update(order)
    logger.info('Order %s completed', order.order_id)
    return str(order.order_id)
