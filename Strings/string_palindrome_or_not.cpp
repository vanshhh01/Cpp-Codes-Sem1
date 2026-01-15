#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    cout<<"enter your string: ";
    cin.getline(str,100);
    int l=strlen(str);
    int flag=0;
    for(int i=0; i<l/2; i++){
        if(str[i]==str[l-i-1]){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}