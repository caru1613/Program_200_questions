#include <iostream>
#include <string>

using namespace std;

void type1(string msg, int no, double value)
{
    cout << msg << ", error number " << no << ", error value " << value << endl;
}

void type2(int no, double value)
{
    cout << no << ", error value " << value << endl;
}

template<typename... T>
void printlog(T... arg0)
{
    type1(arg0...);
    //type2(arg0...);
}

int main()
{
    printlog<string, int, double>("Warning", 100, 22.5);
    //printlog<int, double>(101, 55.6);

    return 0;
}
