#include<iostream>
using namespace std;
int main () {
    int a = 10;
    int *ptr = &a;

    *ptr = 50 ;

    cout<<"a : "<<a<<endl;
    cout<<"Pointer Value : "<<*ptr<<endl;

    return 0;
}