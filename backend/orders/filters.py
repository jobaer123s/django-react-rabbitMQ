"""Filter objects for Order viewsets."""

import django_filters

from .models import Order


class OrderFilter(django_filters.FilterSet):
    status = django_filters.CharFilter(field_name='status', lookup_expr='iexact')
    start_date = django_filters.IsoDateTimeFilter(field_name='created_at', lookup_expr='gte')
    end_date = django_filters.IsoDateTimeFilter(field_name='created_at', lookup_expr='lte')

    class Meta:
        model = Order
        fields = ['status', 'start_date', 'end_date']
