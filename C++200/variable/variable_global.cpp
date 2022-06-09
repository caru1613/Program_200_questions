#include <iostream>

using namespace std;

int g_number = 100;

int func1()
{
    return g_number++;
}

int func2()
{
    return g_number++;
}

int main()
{
    int number = g_number++;

    cout << "number in main() :" << number << endl;
    cout << "number in func1() :" << func1() << endl;
    cout << "number in func2() :" << func2() << endl;

    return 0;
}
