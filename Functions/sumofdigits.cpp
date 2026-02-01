#include <bits/stdc++.h>
using namespace std;

int sm(int n){
    if(n==0)return 0;
    return (n%10)+ sm(n/10);
}

int main() {
    int n;
    cout<<"enter the digit :";
    cin>>n;
    cout<<sm(n);
    return 0;
}