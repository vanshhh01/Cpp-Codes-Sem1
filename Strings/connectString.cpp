#include <bits/stdc++.h>
using namespace std;

int main() {

    char a[100], b[100];
    int l;
    cout<<"enter 1st string: "<<endl;
    cin.getline(a,100);
    cout<<"enter 2nd string: "<<endl;
    cin.getline(b,100);
    strcat(a, " ");
    strcat(a,b);
    cout<<" Combined string: "<<a<<endl;
    l=strlen(a);
    cout<<"length of combined string: "<<l;

    return 0;
}