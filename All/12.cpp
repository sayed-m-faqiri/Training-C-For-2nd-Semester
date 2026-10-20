#include <iostream>
using namespace std;
float multplication(int a, int b, float c);
int main()
{

    float multiplicationResult = multplication(11, 22, 1.29);
    cout << multiplicationResult << endl;

    return 0;
}
float multplication(int a, int b, float c)
{
    return a * b * c;
}