#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int number = 4;
    
    vector<int> data{ 4, 1, 3, 5, 2, 3, 1, 7};
    vector<int>::iterator result1 = find_if(data.begin(), data.end(), [number](int i) { return i > number; });

    cout << "The first number bigger than 4 : " << *result1 << endl;

    auto result2 = count_if(data.begin(), data.end(), [number](int i) { return i > number; });

    cout << "The number of numbers bigger than 4 : " << result2 << endl;

    return 0;
}
