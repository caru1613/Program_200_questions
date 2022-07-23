#include <iostream>
#include <map>
#include <string>

using namespace std;

void Print(const map<int, string> &data)
{
    cout << "== Print ==" << endl;

    for (auto iter = data.begin();
            iter != data.end();
            ++iter)
        cout << iter->first << " : " << iter->second << ", ";

    cout << endl;
}

int main()
{
    map<int, string> data;
    data.insert({0, "First"});
    data.insert({1, "Second"});

    Print(data);

    auto ret = data.insert({1, "Third"});

    if(ret.second == true)
        cout << "Succeed to insert data" << endl;
    else
        cout << "Failed to insert data" << endl;

    data.at(0) = "Modify1";

    Print(data);
}
