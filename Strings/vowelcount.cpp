#include <bits/stdc++.h>
using namespace std;

int main() {
    int v=0;
    int c=0;
    int temp=0;
    char str[100];
    cout<<"enter ur string: "<<endl;
    cin.getline(str, 100);
    for(int i=0; str[i]!='\0'; i++){
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            v++;
        }
        else if(str[i]==' '){
            temp++;
        }
        else {
            c++;
        }
    }
    cout<<"vowels: "<<v<<" consonants: "<<c;
    return 0;
}