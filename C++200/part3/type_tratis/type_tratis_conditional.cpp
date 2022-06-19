#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
string TmpFunc(T1 x, T2 y)
{
    //bool is_same_value = is_same<T1, T2>::value; 
    bool is_same_value = false;
    typedef conditional< is_same_value, int, double >::type type1;

    return typeid(type1).name();
}

int main()
{
    std::string type = TmpFunc(1,22.3);
    //std::string type = TmpFunc(1,22);

    /* 
     * type is 'd' if it is double.
     * type is 'i' if it it int 
     */
    cout << type << endl;
    if (type == "d")
        std::cout << "Type is double." << std::endl;
    else
        std::cout << "Type is not double." << std::endl;

    return 0;
}
