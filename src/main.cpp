#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <chrono>

class TaskScheduler {
public:
    void addTask(int taskId) {
        std::unique_lock<std::mutex> lock(mutex_);
        tasks.push(taskId);
        cond_var.notify_one();
    }

    void run() {
        while (true) {
            std::unique_lock<std::mutex> lock(mutex_);
            cond_var.wait(lock, [this]() { return !tasks.empty(); });

            int task = tasks.front();
            tasks.pop();
            lock.unlock();

            std::cout << "Processing task: " << task << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

private:
    std::queue<int> tasks;
    std::mutex mutex_;
    std::condition_variable cond_var;
};

int main() {
    TaskScheduler scheduler;
    std::thread worker(&TaskScheduler::run, &scheduler);

    for (int i = 1; i <= 5; ++i) {
        scheduler.addTask(i);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    worker.join();
    return 0;
}
