import { API_BASE_URL } from './config';

const buildQuery = (params = {}) => {
  const url = new URL(`${API_BASE_URL}/api/orders/`);
  Object.entries(params).forEach(([key, value]) => {
    if (value) {
      url.searchParams.set(key, value);
    }
  });
  return url;
};

export async function createOrder(quantity) {
  const response = await fetch(`${API_BASE_URL}/api/orders/`, {
    method: 'POST',
    headers: {
      'Content-Type': 'application/json',
    },
    body: JSON.stringify({ quantity }),
  });

  if (!response.ok) {
    const errorText = await response.text();
    throw new Error(errorText || 'Failed to submit order');
  }

  return response.json();
}

export async function fetchOrders(filters = {}) {
  const query = buildQuery(filters);
  const response = await fetch(query);
  if (!response.ok) {
    throw new Error('Unable to fetch orders');
  }
  const payload = await response.json();
  if (Array.isArray(payload)) {
    return payload;
  }
  return payload.results || [];
}
