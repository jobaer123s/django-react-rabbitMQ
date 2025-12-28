const trimTrailingSlash = (value) => value.replace(/\/$/, '');

const rawApi = import.meta.env.VITE_API_BASE_URL || 'http://localhost:8000';
const API_BASE_URL = trimTrailingSlash(rawApi);
const WS_BASE_URL = trimTrailingSlash(
  import.meta.env.VITE_WS_BASE_URL || rawApi.replace('http', 'ws')
);

export { API_BASE_URL, WS_BASE_URL };
