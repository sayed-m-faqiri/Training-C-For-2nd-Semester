#include <iostream>
using namespace std;
int sum(int a, int b);
int main()
{

    int total = sum(10, 20);
    cout << "The Total Of Two Numbers Are : " << total << endl;

    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}