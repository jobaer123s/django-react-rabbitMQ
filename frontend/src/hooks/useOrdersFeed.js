import { useEffect } from 'react';
import { WS_BASE_URL } from '../config';

const WS_PATH = '/ws/orders/';

export const useOrdersFeed = (handler) => {
  useEffect(() => {
    const socket = new WebSocket(`${WS_BASE_URL}${WS_PATH}`);

    socket.onmessage = (event) => {
      try {
        const payload = JSON.parse(event.data);
        handler(payload);
      } catch (error) {
        console.error('Failed to parse websocket payload', error);
      }
    };

    socket.onerror = (event) => {
      console.error('WebSocket error', event);
    };

    return () => socket.close(1000, 'component unmounted');
  }, [handler]);
};
