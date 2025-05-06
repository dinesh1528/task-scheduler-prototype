import requests

API_URL = "https://your-cloud-run-url.a.run.app/task"

for i in range(5):
    response = requests.post(API_URL, json={"taskId": i + 1})
    print(response.text)
