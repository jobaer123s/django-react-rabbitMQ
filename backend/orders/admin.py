from django.contrib import admin

from .models import Order


@admin.register(Order)
class OrderAdmin(admin.ModelAdmin):
    list_display = ('order_id', 'product_name', 'status', 'quantity', 'created_at')
    list_filter = ('status', 'created_at')
    search_fields = ('order_id', 'product_name')
    ordering = ('-created_at',)
