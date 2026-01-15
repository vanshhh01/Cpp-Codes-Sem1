#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks[9];

    cout << "Enter marks: ";
    for(int i = 0; i < 9; i++) {
        cin >> marks[i];
    }

    cout << "Marks are: ";
    for(int i = 0; i < 9; i++) {
        cout << marks[i] << " ";
    }

    return 0;
}
