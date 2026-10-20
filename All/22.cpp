#include <iostream>
using namespace std;
int interchangeFunc(int &a, int &b);
int main()
{
    int a = 10;
    int b = 20;
    interchangeFunc(a, b);
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    return 0;
}

int interchangeFunc(int &a, int &b)
{
    int save = a;
    a = b;
    b = save;
    return a, b, save;
}
