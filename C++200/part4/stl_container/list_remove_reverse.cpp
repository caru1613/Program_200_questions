#include <iostream>
#include <list>

using namespace std;

void Print(const list<int> &data)
{
    cout << " == Print == " << endl;

    for(auto iter = data.begin();
            iter != data.end();
            ++iter)
        cout << *iter << ", ";

    cout << endl;
}

/* return false if the result is even */
bool IsOdd(int arg)
{
    //return arg % 2 == 0? false : true;
    return !((bool)(arg % 2 == 0));
}

int main()
{
    list<int> data1({1,2,4,2,7,10,13,14});
    Print(data1);
    data1.remove(2);
    data1.remove_if(IsOdd);
    Print(data1);
    data1.reverse();
    Print(data1);

    return 0;
}

