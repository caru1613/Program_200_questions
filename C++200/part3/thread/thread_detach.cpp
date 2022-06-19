#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec)
{
    cout << "It waits " << sec <<  "seconds" << endl;

    this_thread::sleep_for(chrono::seconds(sec));
}

void thread_func_1()
{
    int sec = 1;
    for (int i = 0; i < 3; i++)
    {
        this_thread::sleep_for(chrono::seconds(sec));
        cout << __func__ << endl;
    }
}

void thread_func_2()
{
    int sec = 2;
    for (int i = 0; i < 3; i++)
    {
        this_thread::sleep_for(chrono::seconds(sec));
        cout << __func__ << endl;
    }
}

void thread_func_3()
{
    int sec = 3;
    for (int i = 0; i < 3; i++)
    {
        this_thread::sleep_for(chrono::seconds(sec));
        cout << __func__ << endl;
    }
}

int main()
{
    thread thread1(thread_func_1);
    thread thread2(thread_func_2);
    thread thread3(thread_func_3);

    thread1.detach();
    thread2.detach();
    thread3.detach();

    cout << __func__ << endl;
    getchar();

    return 0;
}
