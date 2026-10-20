#include <iostream>
using namespace std;
int main()
{
    string name[5];

    for (int i = 0; i <= 4; i++)
    {

        cout << "Write Down The " << i + 1 << " Name" << endl;
        cin >> name[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}