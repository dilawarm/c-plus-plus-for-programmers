#include <iostream>
#include <thread>
#include <mutex>
#include <string>
#include <functional>
#include <vector>
using namespace std;

template <typename T>
class ThreadSafeVector {
public:
    vector<T> vec;
    mutex vec_mutex;
    void emplace_back(const T &v) {
        lock_guard<mutex> lock(vec_mutex);
        vec.emplace_back(v);
    }
    void for_each(const function<void(const T &)> &f) {
        lock_guard<mutex> lock(vec_mutex);
        for (auto &e : vec) f(e);
    }
};

int main() {
    ThreadSafeVector<int> safe_vec;

    vector<thread> threads;
    for (int thread_id = 0; thread_id < 4; ++thread_id) {
        threads.emplace_back([thread_id, &safe_vec] {
            safe_vec.emplace_back(thread_id);
        });
    }
    for (auto &thread : threads) thread.join();

    string result;
    threads.clear();
    for (int thread_id = 0; thread_id < 4; ++thread_id) {
        threads.emplace_back([&result, &safe_vec] {
            safe_vec.for_each([&result] (int e) {
                result += to_string(e);
            });
        });
    }
    for (auto &thread : threads) thread.join();
    cout << result << endl;
}