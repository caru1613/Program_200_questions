#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int data1[10] = {0, };
    fill_n(data1, 2, 10);
    fill_n(data1 + 4, 3, 20);
    
    cout << "=== data1 ===" << endl;
    for (int i = 0; i < 10; i++)
        cout << data1[i] << ", ";
    cout << endl;

    //vector<int> data2 = {0, 1, 2, 3, 4, 5, 6, 7};
    vector<int> data2(8);
    fill_n(data2.begin(), data2.size() - 1, 30);
    fill_n(data2.begin(), 4, 40);

    cout << "=== data2 ===" << endl;
    for (int i = 0, size = data2.size(); i < size; i++)
        cout << data2.at(i) << ", ";
    cout << endl;

    return 0;
}
