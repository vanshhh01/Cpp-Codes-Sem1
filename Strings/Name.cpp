#include <bits/stdc++.h>
using namespace std;

int main() {
    char fname[20];
    char sname[20];
    char flname[50];

    cout<<"enter ur first name: "<<endl;
    cin>>fname;
    cout<<"enter ur last name: "<<endl;
    cin>>sname;
    cout<<"ur first name is "<<fname<<" which have "<<strlen(fname)<<" characters "<<"and last name is "<<sname<<" which have "<<strlen(sname)<<" characters "<<endl;
    strcpy(flname, fname);
    strcat(flname, " ");
    strcat(flname, sname);
    int cr=strlen(flname)-1;
    cout<<"ur full name is "<<flname<<" which have "<<cr<<" characters ";



    return 0;
}