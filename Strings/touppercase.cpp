#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    cout<<"enter ur string: ";
    cin.getline(str,100);
    cout<<"Uppercase string: ";
    for(int i=0; str[i]!='\0';i++){
        char uc=toupper(str[i]);
        cout<<uc;
    }
    return 0;
}