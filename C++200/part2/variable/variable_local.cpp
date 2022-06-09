#include <iostream>

using namespace std;

int temp1(const int arg)
{
    int number = 20;

    return number + 1;
}
int temp2(const int arg)
{
    int number = arg;

    return number + 1;
}

int main()
{
    int number = 10;

    int ret1 = temp1(number); 
    int ret2 = temp2(number); 

    cout << "number in main() : " << number << endl;
    cout << "number in temp1() : " << ret1 << endl;
    cout << "number in temp2() : " << ret2 << endl;

    return 0;
}
