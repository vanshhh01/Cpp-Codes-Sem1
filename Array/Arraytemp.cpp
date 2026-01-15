#include <bits/stdc++.h>
using namespace std;

int main() {

    int marks[]={22,22,55,34,76,8,9};
    cout<<sizeof(marks)/sizeof(int)<<endl; //array ki size nikalne k liye
    marks[2]=98; //specific array ko change krne k liye
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
    return 0;
}