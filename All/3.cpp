#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int total = 0;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Write The " << i + 1 << " Number" << endl;
        cin >> num[i];
        total = total + num[i];
    }
    cout << "Total = " << total << endl;
    cout << "Average = " << total / 5 << endl;

    return 0;
}
