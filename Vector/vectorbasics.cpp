#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec={22,4,5,6,77,90};
    vec.push_back(22);
    int sz=vec.size();
    cout<<"size of vector= "<<vec.size()<<endl;
    
    for(int i=0; i<sz; i++){
        cout<<vec.at(i)<<endl;
    }
    return 0;
}