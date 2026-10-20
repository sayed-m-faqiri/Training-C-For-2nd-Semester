#include <iostream>
#include <string>
using namespace std;
int main()
{

    string name[5] = {"Ahmad", "Rashed", "Nasir", "Shafi", "Rafi"};
    string urSearchName;
    bool found = false;

    cout
        << "Write The Name You Want To Search : ";
    cin >> urSearchName;

    for (int i = 0; i <= 4; i++)
    {
        if (urSearchName == name[i])
        {
            found = true;
            cout << "Name Found In Position : " << i + 1 << endl;
            break;
        }
        cout << "Not Found In Position : " << i + 1 << endl;
    }
    if (found)
    {
        return 0;
    }
    else
    {
        cout << "The Name Not Found" << endl;
    }

    return 0;
}