#include <iostream>

using namespace std;

int main()
{
    int x = 2;
    double y = 4.4;
    
    int i = static_cast<int>(y/x);
    int j = (int)y/x;
    double k = y/x;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    return 0;
}
