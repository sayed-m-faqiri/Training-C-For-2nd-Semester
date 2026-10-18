#include <iostream>
using namespace std;
struct books
{
    int id;
    string name;
    double price;
};

int main()
{
    books book[3] = {
        {1, "48 Rules Of Power", 120.2},
        {2, "Rules Of Life", 100},
        {3, "Life Space", 80}};

    for (int i = 0; i <= 2; i++)
    {
        cout << "Name : " << book[i].name << "| Price : " << book[i].price << endl;
    }

    return 0;
}