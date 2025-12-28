"""Serializers for order API endpoints."""

from rest_framework import serializers

from .constants import DEMO_PRODUCT
from .models import Order


class OrderSerializer(serializers.ModelSerializer):
    total_price = serializers.SerializerMethodField()

    class Meta:
        model = Order
        fields = [
            'id',
            'order_id',
            'product_name',
            'product_description',
            'price',
            'quantity',
            'status',
            'created_at',
            'updated_at',
            'total_price',
        ]
        read_only_fields = (
            'id',
            'order_id',
            'status',
            'created_at',
            'updated_at',
            'total_price',
        )

    def get_total_price(self, obj: Order) -> float:
        return obj.total_price


class OrderCreateSerializer(OrderSerializer):
    quantity = serializers.IntegerField(min_value=1, max_value=10, default=1)
    product_name = serializers.CharField(required=False, default=DEMO_PRODUCT['product_name'])
    product_description = serializers.CharField(
        required=False, allow_blank=True, default=DEMO_PRODUCT['product_description']
    )
    price = serializers.DecimalField(
        required=False,
        max_digits=10,
        decimal_places=2,
        default=DEMO_PRODUCT['price'],
    )

    class Meta(OrderSerializer.Meta):
        read_only_fields = OrderSerializer.Meta.read_only_fields

    def validate(self, attrs):
        data = super().validate(attrs)
        for key, value in DEMO_PRODUCT.items():
            data.setdefault(key, value)
        return data
