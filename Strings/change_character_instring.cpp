#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    char oldc, newc;
    cout<<"enter your string: ";
    cin.getline(str, 100);
    cout<<endl<<"enter the character you want to replace: ";
    cin>>oldc;
    cout<<endl<<"enter the new character: ";
    cin>>newc;

    
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==oldc){
            str[i]=newc;
        }
        
    }
    cout<<"string after replacing character: "<<str;
    return 0;
}