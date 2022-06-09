#include <iostream>
#include <string>

using namespace std;

int main()
{
    string king = "King";
    string favorite_1  = "meal";
    string favorite_2  = "working hard";

    string king_info = "";

    king_info += king;
    king_info += " likes ";
    king_info += favorite_1;
    king_info.append( " and ");
    king_info.append(favorite_2);
    king_info.append(".");

    cout << king_info << endl;

    return 0;
}
