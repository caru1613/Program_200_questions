#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sort_str1 = "gojoseon";
    string sort_str2 = "AaBbCcDdEe";

    sort(sort_str1.begin(), sort_str1.end());
    sort(sort_str2.begin(), sort_str2.end());

    cout << "Sort lower only: " << sort_str1 << endl;
    cout << "Sort lower and upper: " << sort_str2 << endl;
    return 0;
}
