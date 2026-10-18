#include <iostream>
using namespace std;
int main()
{
    int A[10] = {1, 4, 2, 3, 7, 6, 8, 2, 23, 10};

    for(int i = 0 ; i <= 9 ; i++) {
        for(int j = i + 1 ; j <= 9 ; j++) {
            if(A[j] < A[i]) {
                int save = A[j];
                A[j] = A[i] ;
                A[i] = save;
            }
        }
    }
    for(int i = 0 ; i <= 9 ; i++) {
        cout<<A[i]<<endl;
    }

    return 0;
}