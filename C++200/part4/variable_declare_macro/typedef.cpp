#include <iostream>

using namespace std;

enum State
{
    kOpen,
    kClose,
    kDisconnect
};

typedef State state_;

struct Status
{
    State machine1;
    State machine2;
} status_;

int main()
{

    status_.machine1 = kOpen;
    status_.machine2 = kDisconnect;

    cout << "status 1: " << status_.machine1 << endl;
    cout << "status 2: " << status_.machine2 << endl;

}
