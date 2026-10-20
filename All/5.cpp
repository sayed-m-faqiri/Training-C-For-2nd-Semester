#include <iostream>
using namespace std;
int main()
{
    int num1[5] = {2, 4, 6, 8, 10};
    int num2[5] = {1, 3, 5, 7, 9};
    int total[5];

    for (int i = 0; i <= 4; i++)
    {
        total[i] = num1[i] + num2[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << total[i] << endl;
    }

    return 0;
}