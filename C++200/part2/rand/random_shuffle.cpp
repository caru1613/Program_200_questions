#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
    string str1 = "1q2w3e4r5t6y7u8i9o";
    string str2 = "republic of korea";
    int data[10] = { 1,2,3,4,5,6,7,8,9,10};

    srand(static_cast<unsigned int>(time(NULL)));
    
    random_shuffle(str1.begin(), str1.end());
    random_shuffle(str2.begin(), str2.end());
    random_shuffle(data, data + 4);

    cout << "== str1 ==" << endl;
    for( auto i : str1)
        cout << i << ", ";
    cout << endl;

    cout << "== str2 ==" << endl;
    for( auto i : str2)
        cout << i << ", ";
    cout << endl;

    cout << "== data ==" << endl;
    for( auto i : data)
        cout << i << ", ";
    cout << endl;

    return 0;
}
