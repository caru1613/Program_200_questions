#include <iostream>
#include <string>
#include <vector>

using namespace std;

int PointerFunc(vector<string> *info)
{
    if (info->empty() == true)
        return 0;
    else
        return sizeof(info);
}

int main()
{
    vector<string> message;
    message.push_back("AAAA");
    message.push_back("BBBB");
    /*
    message.push_back("CCCC");
    message.push_back("DDDD");
    */

    cout << "Pointer variable size : " << PointerFunc(&message) << endl;
    cout << "Variable size : " << sizeof(message) << endl;
    return 0;
}

