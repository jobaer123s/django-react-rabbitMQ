"""Utility helpers for broadcasting realtime updates."""

import logging

from asgiref.sync import async_to_sync
from channels.layers import get_channel_layer
from django.conf import settings
from redis.exceptions import ConnectionError as RedisConnectionError

from .models import Order


def serialize_order(order: Order) -> dict:
    return {
        'id': order.id,
        'order_id': str(order.order_id),
        'product_name': order.product_name,
        'product_description': order.product_description,
        'price': float(order.price),
        'quantity': order.quantity,
        'status': order.status,
        'created_at': order.created_at.isoformat(),
        'updated_at': order.updated_at.isoformat(),
        'total_price': order.total_price,
    }


logger = logging.getLogger(__name__)


def broadcast_order_update(order: Order) -> None:
    """Send an order payload to all websocket subscribers."""
    channel_layer = get_channel_layer()
    if not channel_layer:
        return

    payload = serialize_order(order)
    try:
        async_to_sync(channel_layer.group_send)(
            settings.ORDER_STATUS_CHANNEL_GROUP,
            {
                'type': 'order_status',
                'data': payload,
            },
        )
    except RedisConnectionError as exc:  # pragma: no cover - fails only when Redis down
        logger.warning('Skipping websocket broadcast; Redis offline: %s', exc)
