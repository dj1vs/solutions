#include <iostream>
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

    string oct;
    while (n) {
        oct += (n % 8) + '0'; 
        n /= 8;
    }

    for (auto i = oct.rbegin(); i != oct.rend(); ++i) {
        cout << *i;
    }
}

int main() {
    int N; cin >> N;
    printOct(N);
}