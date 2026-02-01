#include <bits/stdc++.h>
using namespace std;

void table(int x, int y){
    if(y>10)return;
    cout<<x<<"X"<<y<<"="<<x*y<<endl;
    table(x, y+1);

}

int main() {
    int x;
    cout<<"enter a number: ";
    cin>>x;
    table(x,1);

    
    return 0;
}