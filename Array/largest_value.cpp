#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[]={22,34,65,32,45,1,4,66,-8};
    int largest= INT_MIN;

    for(int i=0; i<9; i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }

    cout<<largest;

    return 0;
}