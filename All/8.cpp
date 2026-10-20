#include <iostream>
using namespace std;
int main()
{
    int num[5] = {10, 40, 10, 20, 90};

    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j <= 4; j++)
        {
            if (num[i] < num[j])
            {
                int save = num[i];
                num[i] = num[j];
                num[j] = save;
            }
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}