#include <iostream>
#include <vector>
using namespace std;

inline char numberToHex(int n) {
    return (n < 10 ? n + '0' : 'A' + n - 10);
}

void printHex(int n) {
    string hex;
    while (n) {
        hex += numberToHex(n % 16);
        n /= 16;
    }

    for (int i = 0; i < 4 - hex.size(); ++i) {
        cout << '0';
    }

    for (int i = hex.size() - 1; i != -1; --i) {
        cout << hex[i];
    }
}

int main() {
    int n; cin >> n;
    printHex(n);
}