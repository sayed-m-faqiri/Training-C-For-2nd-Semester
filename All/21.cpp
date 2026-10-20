#include <iostream>
using namespace std;
int num(int &x);
int main()
{

    int x;
    cout<<num(x)<<endl;

    return 0;
}
int num(int &x)
{
    x = 100;
    return x;
}