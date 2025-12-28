"""Database models for order management."""

from __future__ import annotations

import uuid

from django.conf import settings
from django.db import models


class OrderQuerySet(models.QuerySet):
    """Custom queryset with helpers for status transitions."""

    def status_counts(self) -> dict[str, int]:
        return {
            item['status']: item['total']
            for item in self.values('status').order_by('status').annotate(total=models.Count('id'))
        }


class Order(models.Model):
    class Status(models.TextChoices):
        PENDING = 'pending', 'Pending'
        PROCESSING = 'processing', 'Processing'
        COMPLETED = 'completed', 'Completed'

    order_id = models.UUIDField(default=uuid.uuid4, unique=True, editable=False, db_index=True)
    user = models.ForeignKey(
        settings.AUTH_USER_MODEL,
        on_delete=models.SET_NULL,
        related_name='orders',
        null=True,
        blank=True,
    )
    product_name = models.CharField(max_length=255)
    product_description = models.TextField(blank=True)
    price = models.DecimalField(max_digits=10, decimal_places=2)
    quantity = models.PositiveSmallIntegerField(default=1)
    status = models.CharField(max_length=32, choices=Status.choices, default=Status.PENDING, db_index=True)
    created_at = models.DateTimeField(auto_now_add=True, db_index=True)
    updated_at = models.DateTimeField(auto_now=True)

    objects = OrderQuerySet.as_manager()

    class Meta:
        ordering = ('-created_at',)
        indexes = [
            models.Index(fields=['order_id']),
            models.Index(fields=['status']),
            models.Index(fields=['created_at']),
            models.Index(fields=['user', 'status']),
        ]

    def __str__(self) -> str:  # pragma: no cover - helpful during debugging
        return f'{self.product_name} ({self.status})'

    @property
    def total_price(self) -> float:
        return float(self.price) * self.quantity

    def to_event_payload(self) -> dict[str, str | int]:
        return {
            'id': self.id,
            'order_id': str(self.order_id),
            'status': self.status,
            'quantity': self.quantity,
        }
