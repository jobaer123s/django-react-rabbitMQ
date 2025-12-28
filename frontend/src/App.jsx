import { useCallback, useEffect, useMemo, useState } from 'react';
import './App.css';
import { LandingPage } from './components/LandingPage';
import { OrdersDashboard } from './components/OrdersDashboard';
import { createOrder, fetchOrders } from './api';
import { useOrdersFeed } from './hooks/useOrdersFeed';

const PRODUCT = {
  product_name: 'Real-Time Analytics Widget',
  product_description: 'A polished demo product that proves asynchronous order processing with Django, Celery, RabbitMQ, Redis, and React.',
  price: 199,
};

const DEFAULT_FILTERS = {
  status: '',
  start_date: '',
  end_date: '',
  ordering: '-created_at',
};

const toIsoDate = (value, endOfDay = false) => {
  if (!value) return '';
  const date = new Date(value);
  if (endOfDay) {
    date.setHours(23, 59, 59, 999);
  }
  return date.toISOString();
};

function App() {
  const [view, setView] = useState('landing');
  const [filters, setFilters] = useState(DEFAULT_FILTERS);
  const [orders, setOrders] = useState([]);
  const [ordersLoading, setOrdersLoading] = useState(false);
  const [placing, setPlacing] = useState(false);
  const [error, setError] = useState('');
  const [lastOrder, setLastOrder] = useState(null);

  const filterPayload = useMemo(
    () => ({
      status: filters.status,
      ordering: filters.ordering,
      start_date: toIsoDate(filters.start_date),
      end_date: toIsoDate(filters.end_date, true),
    }),
    [filters]
  );

  const loadOrders = useCallback(async () => {
    setOrdersLoading(true);
    try {
      const data = await fetchOrders(filterPayload);
      setOrders(data);
      setError('');
    } catch (fetchError) {
      console.error(fetchError);
      setError('Unable to load orders. Check API connection.');
    } finally {
      setOrdersLoading(false);
    }
  }, [filterPayload]);

  useEffect(() => {
    loadOrders();
  }, [loadOrders]);

  const handleRealtimeOrder = useCallback((payload) => {
    setOrders((prev) => {
      const index = prev.findIndex((item) => item.order_id === payload.order_id);
      if (index === -1) {
        return [payload, ...prev];
      }
      const updated = [...prev];
      updated[index] = { ...updated[index], ...payload };
      return updated;
    });

    setLastOrder((prev) => (prev?.order_id === payload.order_id ? { ...prev, ...payload } : prev));
  }, []);

  useOrdersFeed(handleRealtimeOrder);

  const handlePlaceOrder = useCallback(
    async (quantity) => {
      setPlacing(true);
      setError('');
      try {
        const created = await createOrder(quantity);
        setLastOrder(created);
        setOrders((prev) => [created, ...prev]);
        setView('dashboard');
      } catch (submitError) {
        console.error(submitError);
        setError('Order submission failed. Make sure the backend is running.');
      } finally {
        setPlacing(false);
      }
    },
    []
  );

  return (
    <div className="app-shell">
      {error && <div className="toast">{error}</div>}
      <LandingPage
        product={PRODUCT}
        onPlaceOrder={handlePlaceOrder}
        creating={placing}
        lastOrder={lastOrder}
        onViewDashboard={() => {
          setView('dashboard');
          loadOrders();
        }}
      />
      {view === 'dashboard' && (
        <OrdersDashboard
          orders={orders}
          filters={filters}
          onFiltersChange={setFilters}
          loading={ordersLoading}
          onRefresh={loadOrders}
        />
      )}
    </div>
  );
}

export default App;
