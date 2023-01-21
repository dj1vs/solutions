#include <iostream>
using namespace std;

char numberToBase(int n) {
    return (n < 10 ? n + '0' : n - 10 + 'A');
}

void printInBase(int n, int base) {
    if (!n) {
        cout << 0;
        return;
    }
    if (n < 0) {
        cout << '-';
        n = -n;
    }

    string inBase;
    while (n) {
        inBase += numberToBase(n % base); 
        n /= base;
    }

    for (auto i = inBase.rbegin(); i != inBase.rend(); ++i) {
        cout << *i;
    }
}

int main() {
    int N, B; cin >> N >> B;
    printInBase(N, B);
}