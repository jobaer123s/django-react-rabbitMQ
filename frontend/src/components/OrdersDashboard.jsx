import { OrderStatusBadge } from './OrderStatusBadge';
import { formatCurrency, formatDateTime } from '../utils/format';

export const OrdersDashboard = ({
  orders,
  filters,
  onFiltersChange,
  loading,
  onRefresh,
}) => {
  const updateFilter = (key, value) => {
    onFiltersChange({ ...filters, [key]: value });
  };

  return (
    <section className="dashboard">
      <div className="dashboard__header">
        <div>
          <h2>Orders Dashboard</h2>
          <p>Monitor every order flowing through the system with live updates.</p>
        </div>
        <div className="dashboard__actions">
          <button type="button" onClick={onRefresh} disabled={loading}>
            Refresh
          </button>
        </div>
      </div>

      <div className="filters">
        <label>
          Status
          <select value={filters.status} onChange={(event) => updateFilter('status', event.target.value)}>
            <option value="">All</option>
            <option value="pending">Pending</option>
            <option value="processing">Processing</option>
            <option value="completed">Completed</option>
          </select>
        </label>
        <label>
          Start Date
          <input
            type="date"
            value={filters.start_date || ''}
            onChange={(event) => updateFilter('start_date', event.target.value)}
          />
        </label>
        <label>
          End Date
          <input
            type="date"
            value={filters.end_date || ''}
            onChange={(event) => updateFilter('end_date', event.target.value)}
          />
        </label>
        <label>
          Sort
          <select value={filters.ordering} onChange={(event) => updateFilter('ordering', event.target.value)}>
            <option value="-created_at">Newest</option>
            <option value="created_at">Oldest</option>
          </select>
        </label>
      </div>

      <div className="table-wrapper">
        <table>
          <thead>
            <tr>
              <th>Order ID</th>
              <th>Product</th>
              <th>Quantity</th>
              <th>Amount</th>
              <th>Status</th>
              <th>Created</th>
            </tr>
          </thead>
          <tbody>
            {orders.length === 0 && (
              <tr>
                <td colSpan="6" className="empty">
                  {loading ? 'Loading orders…' : 'No orders match your filters.'}
                </td>
              </tr>
            )}
            {orders.map((order) => (
              <tr key={order.order_id}>
                <td className="mono">{order.order_id}</td>
                <td>{order.product_name}</td>
                <td>{order.quantity}</td>
                <td>{formatCurrency(order.total_price || order.price * order.quantity)}</td>
                <td>
                  <OrderStatusBadge status={order.status} />
                </td>
                <td>{formatDateTime(order.created_at)}</td>
              </tr>
            ))}
          </tbody>
        </table>
      </div>
    </section>
  );
};
