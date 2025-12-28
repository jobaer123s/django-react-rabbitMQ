import { useState } from 'react';
import { OrderStatusBadge } from './OrderStatusBadge';
import { formatCurrency } from '../utils/format';

const heroImage = 'https://images.unsplash.com/photo-1520607162513-77705c0f0d4a?auto=format&fit=crop&w=1200&q=80';

export const LandingPage = ({ product, onPlaceOrder, creating, lastOrder, onViewDashboard }) => {
  const [quantity, setQuantity] = useState(1);

  const handleSubmit = async (event) => {
    event.preventDefault();
    await onPlaceOrder(Number(quantity));
  };

  return (
    <section className="landing">
      <div className="landing__content">
        <div className="landing__copy">
          <p className="eyebrow">Real-Time Order Processing</p>
          <h1>{product.product_name}</h1>
          <p className="lead">{product.product_description}</p>
          <p className="price">{formatCurrency(product.price)}</p>
          <div className="actions">
            <form onSubmit={handleSubmit} className="order-form">
              <label htmlFor="quantity">Quantity</label>
              <input
                id="quantity"
                type="number"
                min={1}
                max={10}
                value={quantity}
                onChange={(event) => setQuantity(event.target.value)}
              />
              <button type="submit" className="primary" disabled={creating}>
                {creating ? 'Placing…' : 'Place Order'}
              </button>
            </form>
            <button type="button" className="ghost" onClick={onViewDashboard}>
              View All Orders
            </button>
          </div>
          {lastOrder && (
            <div className="status-card">
              <p>Latest order: <strong>{lastOrder.order_id}</strong></p>
              <OrderStatusBadge status={lastOrder.status} />
            </div>
          )}
        </div>
        <div className="landing__visual" style={{ backgroundImage: `url(${heroImage})` }}>
          <div className="landing__overlay">
            <p>Live status updates without page refresh.</p>
          </div>
        </div>
      </div>
    </section>
  );
};
