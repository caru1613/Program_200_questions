#include <iostream>
#include <string>
#include <algorithm>

//using namespace std;

int main()
{
    std::string silla = "Divided into the Three Kingdom.";
    std::string joseon = "Established In 1392.";

    std::transform(silla.begin(), silla.end(), silla.begin(), toupper);
    std::transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);

    char lower_ch = 'g';
    char upper_ch = 'B';

    lower_ch = toupper(lower_ch);
    upper_ch = tolower(upper_ch);

    std::cout << "Transform String to upper :"<< silla << std::endl;
    std::cout << "Transform String to lower :"<< joseon << std::endl;

    std::cout << "Transform Char to upper :"<< lower_ch << std::endl;
    std::cout << "Transform Char to lower :"<< upper_ch << std::endl;

    return 0;
}
