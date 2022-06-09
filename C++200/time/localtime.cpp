#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(NULL);
    tm* ptm = localtime(&now);

    char buffer[64];
    strftime(buffer, 64, "Current time: Year %Y Month %m Day %d, Hour %H minute %M secound %S.(%p)\n", ptm);

    cout << now << endl;
    cout << buffer << endl;

    return 0;
}
