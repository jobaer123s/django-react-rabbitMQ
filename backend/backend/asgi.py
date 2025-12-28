"""ASGI configuration wiring HTTP and websocket protocols."""

import os

from channels.auth import AuthMiddlewareStack
from channels.routing import ProtocolTypeRouter, URLRouter
from django.core.asgi import get_asgi_application

settings_module = os.getenv('PROJECT_SETTINGS_MODULE', 'backend.settings')
os.environ.setdefault('DJANGO_SETTINGS_MODULE', settings_module)
os.environ['DJANGO_SETTINGS_MODULE'] = settings_module

django_application = get_asgi_application()

try:
    from orders import routing as orders_routing
except Exception:  # pragma: no cover - helps when app not ready for e.g. collectstatic
    orders_routing = None

application = ProtocolTypeRouter(
    {
        'http': django_application,
        'websocket': AuthMiddlewareStack(
            URLRouter(orders_routing.websocket_urlpatterns if orders_routing else [])
        ),
    }
)
