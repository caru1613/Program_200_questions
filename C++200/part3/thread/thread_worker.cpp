#include <cstdio>
#include <iostream>
#include <thread>
#include <vector>

using std::thread;
using std::vector;
using namespace std;

void worker(vector<int>::iterator start, vector<int>::iterator end, int* result)
{
    int sum = 0;

    for (auto itr = start; itr < end; ++itr)
    {
        sum += *itr;
    }
    *result = sum;

    thread::id this_id = std::this_thread::get_id();
    //printf(" Sum %d from %d to %d on thread %s \n", sum, *start, *(end-1), this_id);

    cout << "Sum " << sum << " from " << *start << " to " << *(end-1) <<" on thread " << this_id << endl ;
}
