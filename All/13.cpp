#include <iostream>
using namespace std;
int factorial(int a);
int main()
{
    int fac;
    cout << "Write A Number To Check Its Factorial : " << endl;
    cin >> fac;

    int factorailNumber = factorial(fac);
    cout << "Your Number Factorial Is : " << factorailNumber << endl;

    return 0;
}
int factorial(int a)
{
    int factorailNum = 1;
    for (int i = 1; i <= a; i++)
    {
        factorailNum = factorailNum * i;
    }
    return factorailNum;
}