#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    char rev[100];

    cout << "enter the string: ";
    cin.getline(str, 100);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        rev[i] = str[n - i - 1];
    }
    rev[n] = '\0';

    cout << "reversed string: " << rev;
    return 0;
}
