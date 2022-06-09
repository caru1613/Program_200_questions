#include <iostream>
#include <string>

using namespace std;

int main()
{
    string baekhap_war = "The Baekhap War";
    string find_string1 = "Back";
    string find_string2 = "Baekhap";

    //int ret =  baekhap_war.find("Baekhap");
    int ret =  baekhap_war.find(find_string1);

    if (ret >= 0)
        cout << "Word "<< find_string1 << " found." << endl << "offset is "<< ret << endl;
    else
        cout << "Failed to find " << find_string1 << endl << "ret is " << ret << endl;

    ret =  baekhap_war.find(find_string2);

    if (ret >= 0)
        cout << "Word "<< find_string2 << " found." << endl <<"offset is "<< ret << endl;
    else
        cout << "Failed to find " << find_string2 << endl << "ret is " << ret << endl;

    return 0;
}
