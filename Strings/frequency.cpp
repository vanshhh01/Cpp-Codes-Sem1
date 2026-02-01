#include <iostream>
using namespace std;

int main() {
    char s[100];
    int freq[256] = {0};

    cout << "Enter string: ";
    cin.getline(s, 100);

    for(int i = 0; s[i] != '\0'; i++) {
        freq[s[i]]++;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}
