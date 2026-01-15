#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int sum=0;

    cout<<"enter ur number: ";
    cin>>n;
    for (int i=0; i>=0; i++){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<sum;
    return 0;
}