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
    data.insert({5, "Test1"});
    data.insert({3, "Test2"});
    data.insert({11, "Test3"});
    Print(data);

    data[3] = "Modify test";

    Print(data);

    auto result = data.find(11);

    if(result != data.end())
        cout << "== Succeed to find : " << result->first << ", " << result->second << endl;
    else
        cout << "== Failed to find == " << endl;

    data.erase(5);
    Print(data);

    return 0;
}
