#include <iostream>
using namespace std;
int main()
{
    int num[5] = {10, 20, 30, 40, 50};

    int *p = num;

    for (int i = 0; i <= 4; i++)
    {
        *p = *p + 10;
        p++;
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}