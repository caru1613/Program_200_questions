#include <iostream>
#include <string>

using namespace std;

namespace silla
{
    int year = 935;
    
    void CentralArea()
    {
        cout << "Gyeongjoo" << endl;
    }
}

namespace backjae
{
    int year = 660;
    void CentralArea()
    {
        cout << "Buyeo" << endl;
    }
}

using namespace silla;
using namespace backjae;

int main(int argc, char **argv)
{
    cout << "Silla central Area: ";
    silla::CentralArea();
    cout << "The last year of Silla: " << silla::year << endl;

    cout << "Backjae central Area: ";
    backjae::CentralArea();
    cout << "The last year of Backjae: " << backjae::year << endl;

}
