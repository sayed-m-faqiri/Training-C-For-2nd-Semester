#include <iostream>
#include <string>
using namespace std;
struct students
{
    int id;
    string name;
    float marks[4];
    float total;
    float average;
    string status;
};
int main()
{
    students std[3];

    for (int i = 0; i <= 2; i++)
    {
        std[i].id = i + 1;
        cout << "Write The Name Of The Student " << i + 1 << endl;
        cin >> std[i].name;

        std[i].total = 0;
        for (int j = 0; j <= 3; j++)
        {
            cout << "Write The Scores Of The Subjec " << j + 1 << endl;
            cin >> std[i].marks[j];
            std[i].total = std[i].total + std[i].marks[j];
        }
        std[i].average = std[i].total / 4.0;
        if (std[i].average >= 60.0)
        {
            std[i].status = "Pass";
        }
        else
        {
            std[i].status = "Failed";
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << "Name : " << std[i].name << endl;
        for (int j = 0; j <= 4; j++)
        {
            cout << "Marks : " << std[i].marks[j] << endl;
        }
        cout << "Total  : " << std[i].total << endl;
        cout << "Average : " << std[i].average << endl;
        cout << "Status : " << std[i].status << endl;
        cout << "*********************************************" << endl;
        cout << "*********************************************" << endl;
    }

    return 0;
}