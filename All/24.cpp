#include <iostream>
using namespace std;
int main()
{
    int num[3];
    int *p = num;

    cout << "Write The First Value" << endl;
    cin >> *p;
    p++;
    cout << "Write The Second Value" << endl;
    cin >> *p;
    p++;
    cout << "Write The Third Value" << endl;
    cin >> *p;

    p = num;

    cout << "*****************" << endl;
    cout << *p << endl;
    p++;
    cout << "*****************" << endl;
    cout << *p << endl;
    p++;
    cout << "*****************" << endl;
    cout << *p << endl;

    return 0;
}