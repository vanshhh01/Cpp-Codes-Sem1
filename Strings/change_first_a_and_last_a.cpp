#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    int f=-1;
    int l=-1;
    cout<<"enter your word: ";
    cin.getline(str, 100);
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='a'){
            if(f==-1){
                f=i;
            }
            else{
                l=i;
            }
        }
    }
    str[f]='A';
    str[l]='A';
    cout<<"Updated word: "<<str;
    return 0;
}