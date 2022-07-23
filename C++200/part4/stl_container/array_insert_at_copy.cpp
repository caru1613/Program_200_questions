#include <iostream>
#include <array>

using namespace std;

void Print(const array<int, 3> &data)
{
    cout << "== Print ==" << endl;
    for (auto iter = data.begin();
            iter != data.end();
            ++iter)
        cout << *iter << ", ";

    cout << endl;
}

int main()
{
    array<int, 3> data1({10, 2, 5});
    array<int, 3> data2;
    Print(data1);

    /* It fills 0 to data2 array */
    data2.fill(0);
    /* The same as data2[1] = 200. It allows random access. */ 
    data2.at(1) = 200;
    Print(data2);

    /* It copies data1 to data2. */
    /* Source range is from data1().begin() to data1.end() */
    /* Dest start point is data2.begin() */
    copy(data1.begin(), data1.end(), data2.begin());
    Print(data1);
    Print(data2);

    return 0;
}
