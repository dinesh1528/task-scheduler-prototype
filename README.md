 ## 🧠 Task Scheduler Prototype
A multithreaded task scheduler backend built with C++, wrapped in a Flask API, and deployed using Docker to Google Cloud Run.
This backend is designed to simulate task processing, and it's structured to integrate with mobile (Android) or web frontends.

### 🌐 Live Demo
POST /task : [https://task-scheduler-585385859842.us-central1.run.app/task](https://task-scheduler-585385859842.us-central1.run.app/task)

🧪 Example Request
{ "taskId": 1 }

🧾 Example Response
{ "status": "Task added", "taskId": 1 }

🚀 Features
-

- C++ based multithreaded task queue

- Flask REST API for easy integration

- Dockerized for portability

- CI/CD with GitHub Actions

- Publicly hosted on Google Cloud Run

🛠 Tech Stack
-
- C++ 17 – Core scheduling logic

- Python / Flask – REST API wrapper

- Docker – Containerized deployment

- GitHub Actions – Automated CI

- Google Cloud Run – Serverless hosting

⚙️ Deploy It Yourself
-
## Build the Docker image:

docker build -t task-scheduler .

## Run locally:

docker run -p 8080:8080 task-scheduler


🗂 Project Structure
-
.
├── src/                  # C++ source code
├── app.py               # Flask API endpoint
├── Dockerfile           # Deployment container
├── test/                # Python test script
├── .github/workflows/   # GitHub CI setup
└── README.md

## 📄 License
All Rights Reserved.

