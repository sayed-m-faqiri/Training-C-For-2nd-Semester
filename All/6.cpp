#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Write Down Your Name : " << endl;
    getline(cin,name);

    cout << "Hello " << name;

    return 0;
}