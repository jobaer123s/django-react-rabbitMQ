"""Redis-backed API rate limiting middleware."""

from __future__ import annotations

import time
from typing import Callable

import redis
from django.conf import settings
from django.http import JsonResponse
from django.utils.deprecation import MiddlewareMixin


class RedisRateLimitMiddleware(MiddlewareMixin):
    """Simple sliding window rate limiter for API endpoints."""

    def __init__(self, get_response: Callable | None = None):
        super().__init__(get_response)
        self.redis_client = redis.Redis.from_url(settings.RATE_LIMIT_REDIS_URL, decode_responses=True)

    def process_view(self, request, view_func, view_args, view_kwargs):  # noqa: D401
        print('request--', request)
        if not request.path.startswith('/api/orders'):
            return None

        client_ip = self._get_identifier(request)
        if client_ip in settings.RATE_LIMIT_WHITELIST:
            return None

        try:
            allowed = self._check_allow(client_ip)
        except redis.RedisError:
            return None  # fail-open to keep API responsive if Redis is down

        if not allowed:
            return JsonResponse({'detail': 'Rate limit exceeded. Try again soon.'}, status=429)
        return None

    def _check_allow(self, client_ip: str) -> bool:
        window = settings.RATE_LIMIT_WINDOW_SECONDS
        bucket = int(time.time() // window)
        key = f'rate-limit:{client_ip}:{bucket}'
        current = self.redis_client.incr(key)
        if current == 1:
            self.redis_client.expire(key, window)
        return current <= settings.RATE_LIMIT_REQUESTS

    def _get_identifier(self, request) -> str:
        forwarded_for = request.META.get('HTTP_X_FORWARDED_FOR')
        if forwarded_for:
            return forwarded_for.split(',')[0].strip()
        return request.META.get('REMOTE_ADDR', 'anon')
