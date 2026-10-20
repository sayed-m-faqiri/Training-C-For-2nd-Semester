#include<iostream>
using namespace std;
int main () {
    int num[3]= {1,2,3};
    int *p = num;

    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;


    return 0;
}