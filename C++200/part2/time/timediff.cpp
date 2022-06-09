#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t start = time(NULL);
    time_t finish = time(NULL);

    int pass_int = 1;

    time(&start);

    for(int i=0; i < 100000; i++)
    {
        for (int j=1; j < 100000; j++)
            pass_int+=1;
    }

    time(&finish);

    cout << "Time diff between counting numbers " << difftime(finish, start) << " sec" << endl;
    return 0;
}
