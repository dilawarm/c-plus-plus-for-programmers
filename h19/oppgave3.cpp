#include <thread>
#include <iostream>
#include <memory>
using namespace std;

int main() {
    //thread *a_thread;
    int a = 2;
    //int *b = new int(2);
    unique_ptr<int> b(new int(2));
    unique_ptr<thread> a_thread(new thread([&a, &b] {
        cout << (a + *b) << endl;
    }));
    a_thread->join();
}