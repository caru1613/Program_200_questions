#include <iostream>
#include <vector>
#include <string>

using namespace std;

class InputError : public runtime_error
{
    public:
        InputError(int idx, string msg)
            : runtime_error("")
        {
            cout << "Wrong value in index " << idx << " " << msg << endl;
        }
};

int main()
{
    vector<int> data;
    data.push_back(1);

    int idx = 10;
    int value = 20;

    try
    {
        if (idx >= data.size())
            throw InputError(idx, to_string(value));
        data.at(idx) = 99;
    }
    catch(InputError e)
    {
        cout << e.what();
    }

    return 0;
}
