"""Celery application that processes order events via RabbitMQ."""

import os

from celery import Celery

settings_module = os.getenv('PROJECT_SETTINGS_MODULE', 'backend.settings')
os.environ.setdefault('DJANGO_SETTINGS_MODULE', settings_module)
os.environ['DJANGO_SETTINGS_MODULE'] = settings_module

app = Celery('backend')
app.config_from_object('django.conf:settings', namespace='CELERY')
app.autodiscover_tasks()
