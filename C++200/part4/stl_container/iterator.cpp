#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> data({1,2,3});

    for(vector<int>::iterator iter = data.begin();
            iter != data.end();
            ++iter)
    {
        cout << *iter << ", "; 
    }
    cout << endl;

    // const iterator
    for (auto iter = data.cbegin();
           iter != data.cend();
          ++iter)
    {
       cout << *iter << ", ";
    } 
    cout << endl;

    // reverse iterator
    for (auto iter = data.rbegin();
            iter != data.rend();
            ++iter)
    {
        cout << *iter << ", ";
    }
    cout << endl;

    // It removes all data in vector.
    data.clear();

    for(vector<int>::iterator iter = data.begin();
            iter != data.end();
            ++iter)
    {
        cout << *iter << ", "; 
    }

    return 0;
}   
