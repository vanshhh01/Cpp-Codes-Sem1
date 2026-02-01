#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    cout<<"enter the string: ";
    cin.getline(str,100);
    strrev(str);
    cout<<"reversed string: "<<str;
    return 0;
}