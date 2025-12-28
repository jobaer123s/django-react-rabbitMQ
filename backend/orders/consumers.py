"""Websocket consumers pushing live order updates."""

from channels.generic.websocket import AsyncJsonWebsocketConsumer
from django.conf import settings


class OrderStatusConsumer(AsyncJsonWebsocketConsumer):
    group_name = settings.ORDER_STATUS_CHANNEL_GROUP

    async def connect(self):
        await self.channel_layer.group_add(self.group_name, self.channel_name)
        await self.accept()

    async def disconnect(self, code):  # pragma: no cover - handled by channels
        await self.channel_layer.group_discard(self.group_name, self.channel_name)

    async def order_status(self, event):
        await self.send_json(event['data'])
