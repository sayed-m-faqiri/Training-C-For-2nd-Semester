#include<iostream>
using namespace std;
int main () {
    int a = 10;
    int *ptr = &a;

    cout<<"The Value : "<<a<<endl;
    cout<<"The Address : "<<&a<<endl;
    cout<<"The Pointer Value: "<<*ptr<<endl;

    return 0;
}