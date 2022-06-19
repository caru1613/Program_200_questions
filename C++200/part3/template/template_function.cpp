#include <iostream>

using namespace std;

template <typename T>
T Plus(T x, T y, T z=1)
{
    return x + y + z;
}

int main()
{
    int number1 = Plus(1, 2);
    int number2 = Plus(1, 2, 3);

    double number3 = Plus(1.1, 2.2);
    double number4 = Plus(1.1, 2.2, 3.3);

    cout << number1 << endl;
    cout << number2 << endl;
    cout << number3 << endl;
    cout << number4 << endl;
}
