#include <iostream>

using namespace std;

int main()
{
    string seven_war = "Seven War";
    string seven_war2 = "Seven War";
    string korea_war = "Korea War";

    if(seven_war.compare(korea_war) == 0)
        cout << "The same String" << endl;
    else
        cout << "The different String" << endl;

    if(seven_war.compare(seven_war2) == 0)
        cout << "The same String" << endl;
    else
        cout << "The different String" << endl;

    return 0;
}

