#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int *x = &a;
    int *y = &b;

    *x = 100;
    *y = 200;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}