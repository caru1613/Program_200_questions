#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data;
    //data.push_back(1);

    try
    {
        if(data.empty() == true)
            throw "Vector is empty";

        if(data.size() < 2)
            throw 99;
    }

    /* catch (char* e) couldn't catch above [throw "Vector is empty"].
     * Below is error message.
     * [libc++abi: terminating with uncaught exception of type char const*]
     * So it need to change for char* e to char const* e.
     */
    catch (char const* e)
    {
        cout << "catch (char* e)" << e << endl;
    }

    catch (int e)
    {
        cout << "catch (int e)" << e << endl;
    }

    
    return 0;
}
