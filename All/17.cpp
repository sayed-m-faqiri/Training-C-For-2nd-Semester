#include<iostream>
using namespace std;

void show () {
    static int num = 0;
    num++;
    cout<<num<<endl;
}
int main () {
    
    show();
    show();
    show();
    return 0;
}