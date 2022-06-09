#include <iostream>
#include <string>
#include <vector>
#include <utility>

//using namespace std;

int main()
{
    std::string str1 = "I like coding.";
    /* It looks move() doesn't work. */
    std::string str2 = std::move(str1);

    std::cout <<"str1: " << str1 << std::endl;
    std::cout <<"str2: " << str2 << std::endl;
#if 0
    vector<int> v1 = { 1, 2, 3};
    vector<int> v2 = move(v1);

    cout << "v1 size : " << v1.size() << endl;
    cout << "v2 size : " << v2.size() << endl;
#endif

    std::vector<std::string> v;
    std::string str = "Hello";

    v.push_back(str);
    std::cout << "After coping, str is \"" << str << "\"" << std::endl;
    /* It looks move() doesn't work. */
    v.push_back(std::move(str));
    std::cout << "After moving, str is \"" << str << "\"" << std::endl;

    std::cout << v[0] << '\t' << v[1] << std::endl; 

    return 0;
}
