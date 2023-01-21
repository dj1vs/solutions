#include <iostream>
#include <strstream>
using namespace std;

void printOct(int n) {
    if (!n) {
        cout << 0;
        return;
    }
    if (n < 0) {
        cout << '-';
        n = -n;
    }

    strstream ss; ss << hex << n;
    string hex = ss.str();
    for (int i = 0; i < hex.size(); ++i) {
        if (isalpha(hex[i]))
            cout << (char)toupper(hex[i]);
        else
            cout << (char)hex[i];
    }
}

int main() {
    int N; cin >> N;
    printOct(N);
}