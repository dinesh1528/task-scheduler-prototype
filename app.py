from flask import Flask, request, jsonify

app = Flask(__name__)
scheduler = []

@app.route("/task", methods=["POST"])
def task():
    data = request.get_json()
    task_id = data.get("taskId", 0)
    scheduler.append(task_id)
    return jsonify({"status": "Task added", "taskId": task_id})

if __name__ == "__main__":
    app.run(debug=True)
