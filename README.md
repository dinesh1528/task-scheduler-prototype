# Task Scheduler Prototype (Android-ready Backend)

This project implements a simple C++ multithreaded task scheduler and exposes it via a REST API using Flask and Python.

## Features
- C++ task queue using `std::thread`, `mutex`, `condition_variable`
- REST API endpoint to enqueue tasks
- Dockerized for deployment
- GitHub Actions CI workflow
- Deployable to Google Cloud Run

## How to Use

### 1. Build Docker image
```bash
docker build -t task-scheduler .
```

### 2. Run locally
```bash
docker run -p 8080:8080 task-scheduler
```

### 3. Deploy to Google Cloud
```bash
bash gcloud-deploy.sh
```

## Endpoint

- `POST /task` — Add a task to the queue
```json
{ "taskId": 1 }
```

## License
MIT
