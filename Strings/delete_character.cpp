//Write a program to delete a character from a string at a given position

#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    int p;
    cout<<"enter ur string: ";
    cin.getline(str, 100);
    cout<<"enter the position from where u want to delete character: ";
    cin>>p;
    for(int i=p; str[i]!='\0'; i++){

            str[i]=str[i+1];
    }
    cout<<"updated string: "<<str;
    return 0;
}