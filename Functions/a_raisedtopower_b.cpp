#include <bits/stdc++.h>
using namespace std;

int p(int a, int b){
    if(b==0)return 1;
    return a*p(a,b-1);
        
}

int main() {
    int a,b;

    cout<<"enter base: ";
    cin>>a;
    cout<<endl<<"enter exponent: ";
    cin>>b;
    cout<<endl<<p(a,b);
    return 0;
}