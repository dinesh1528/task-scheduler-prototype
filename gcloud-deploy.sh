#!/bin/bash
gcloud builds submit --tag gcr.io/YOUR_PROJECT_ID/task-scheduler
gcloud run deploy task-scheduler --image gcr.io/YOUR_PROJECT_ID/task-scheduler --platform managed --region us-central1 --allow-unauthenticated
