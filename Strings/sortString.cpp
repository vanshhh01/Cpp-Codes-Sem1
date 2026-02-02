#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    cout<<"enter ur string:";
    cin.getline(str, 100);
    int n= strlen(str);
    sort(str, str+n); //sorting function
    cout<<str;
    return 0;
}