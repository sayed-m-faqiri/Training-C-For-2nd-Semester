#include <iostream>
using namespace std;
int main()
{
    int num[5] = {10, 20, 10, 70, 60};

    int bigNum = num[0];
    for (int i = 1; i <= 3; i++)
    {
        if (bigNum < num[i])
        {
            bigNum = num[i];
        }
    }
    cout << "The Big Number In This Array Is : " << bigNum << endl;

    return 0;
}