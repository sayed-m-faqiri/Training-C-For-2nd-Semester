#include <iostream>
using namespace std;
int greaterValue(int a, int b);
int main()
{
    int greaterNumber = greaterValue(10, 100);
    cout << "The Greater Value Is : " << greaterNumber;

    return 0;
}
int greaterValue(int a, int b)
{
    if (a > b)
    {

        return a;
    }
    else
    {
        return b;
    }
}