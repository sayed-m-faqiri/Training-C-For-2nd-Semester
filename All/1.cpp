#include<iostream>
using namespace std;
int main () {
    int num[10];

    cout<<"Write 10 Numbers To Show Them On Screen : "<<endl;   
    for(int i = 0 ;i <= 9; i++) {   
        cout<<"Write The "<<i + 1 <<" Number"<<endl;
        cin>>num[i];
    }
    for(int i = 0; i <= 9 ; i++) {
        cout<<"Number " << i + 1<< " Is Equal To : "<<num[i]<<endl;
    }
    return 0;
}