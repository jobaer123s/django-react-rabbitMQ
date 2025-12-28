# Real-Time Orders (Django + React + RabbitMQ)

A full-stack demo that shows how to collect orders via a React + Vite front end, process them asynchronously with Django, Celery, RabbitMQ, and Redis, and stream status updates back to the browser with Django Channels websockets.

## Stack
- Django 4 / Django REST Framework for the HTTP API exposed at `/api/`
- Django Channels + Redis for websocket notifications on `/ws/orders/`
- Celery workers listening on RabbitMQ to simulate long running order processing
- PostgreSQL by default (or SQLite when `DB_ENGINE=django.db.backends.sqlite3`)
- React 19 + Vite for the single-page UI

## Prerequisites
Make sure these are installed locally:
- Python 3.11+ and `pip`
- Node.js 20+ and `npm`
- Redis (for cache, websocket channel layer, Celery results, and rate limiting)
- RabbitMQ (Celery broker)
- PostgreSQL (or switch to SQLite in your `.env`)

Each service just needs to be reachable on the defaults from `.env.example`. If you already run Redis/PostgreSQL/RabbitMQ elsewhere, point the URLs accordingly.

## Backend Setup
1. Copy the sample environment file and tweak values as needed:
   ```bash
   cp .env.example .env
   ```
   - Set `DJANGO_SECRET_KEY`, database credentials, and Redis/RabbitMQ URLs.
   - To keep things simple locally you may set `DB_ENGINE=django.db.backends.sqlite3` and skip PostgreSQL.
2. (Optional but recommended) create a virtual environment:
   ```bash
   python -m venv .venv
   source ./venv/bin/activate  # Windows: .venv\Scripts\activate
   ```
3. Install Python dependencies:
   ```bash
   python -m pip install --upgrade pip
   pip install -r requirements.txt
   ```
4. Apply database migrations and create a superuser if you want admin access:
   ```bash
   cd backend
   python manage.py migrate
   python manage.py createsuperuser  # optional
   cd ..
   ```

### Running the backend services
Have Redis, RabbitMQ, and PostgreSQL/SQLite running (for example `redis-server`, `rabbitmq-server`, or via Docker/Homebrew/services). Then use two terminals:
- **Terminal 1 – Django + Channels ASGI server**
  ```bash
  cd backend
  python manage.py runserver 0.0.0.0:8000
  ```
  The API lives under `http://localhost:8000/api/`, health check under `/health/`, Swagger UI under `/api/docs/`, and websockets connect to `ws://localhost:8000/ws/orders/`.
- **Terminal 2 – Celery worker**
  ```bash
  cd backend
  celery -A backend worker -l info
  ```
  The worker consumes jobs from RabbitMQ and emits websocket status updates via Redis.

## Frontend Setup
1. Move into the React app and install dependencies:
   ```bash
   cd frontend
   npm install
   ```
2. (Optional) add a `.env.local` if you need to override defaults:
   ```bash
   VITE_API_BASE_URL=http://localhost:8000
   VITE_WS_BASE_URL=ws://localhost:8000
   ```
   Without overrides the app will talk to `http://localhost:8000` automatically.
3. Start the Vite dev server:
   ```bash
   npm run dev -- --host
   ```
   The UI is available at `http://localhost:5173`. It will fetch orders from the Django API and open a websocket to `/ws/orders/` for real-time updates.

## Typical local workflow
1. Start Redis, RabbitMQ, and your database server.
2. Activate the Python virtualenv and run `python manage.py runserver`.
3. Start a Celery worker with `celery -A backend worker -l info`.
4. In another shell `cd frontend` and run `npm run dev`.
5. Open `http://localhost:5173`, place an order, and watch its status change in real time.

## Useful commands
- `python manage.py test` – run backend tests.
- `npm run lint` / `npm run build` – front-end linting and production build.
- `python manage.py shell_plus` (if you install django-extensions) or `python manage.py shell` – inspect data.

## Troubleshooting
- Make sure the `.env` values match the actual host/port of Redis, RabbitMQ, and your database. Connection errors in the Django logs usually point to a misconfigured URL.
- Vite defaults to port 5173; if you change it, update `DJANGO_CSRF_TRUSTED_ORIGINS` and `CORS_ALLOWED_ORIGINS` in `.env`.
- If websockets fail, confirm Redis is reachable on `CHANNEL_REDIS_URL` and that the Django server log shows `Starting development server at http://127.0.0.1:8000/`.
