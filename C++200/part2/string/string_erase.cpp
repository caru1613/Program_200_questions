#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "I hate coding.";

    sentence.erase(0, 7); //Erase from [0] to [6].

    cout << "I like " << sentence << endl;

    return 0;
}
