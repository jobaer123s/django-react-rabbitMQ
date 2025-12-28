const STATUS_MAP = {
  pending: { label: 'Pending', tone: 'badge badge--pending' },
  processing: { label: 'Processing', tone: 'badge badge--processing' },
  completed: { label: 'Completed', tone: 'badge badge--completed' },
};

export const OrderStatusBadge = ({ status }) => {
  const data = STATUS_MAP[status] || { label: status, tone: 'badge' };
  return <span className={data.tone}>{data.label}</span>;
};
