#include <iostream>
#include <vector>
using namespace std;

void printOctal(int n) {
    vector <int> octalNumbers;
    while (n) {
        octalNumbers.push_back(n % 8);
        n /= 8;
    }

    for (int i = 0; i < 10 - octalNumbers.size(); ++i) {
        cout << '0';
    }

    for (int i = octalNumbers.size() - 1; i != -1; --i) {
        cout << octalNumbers[i];
    }
}

int main() {
    int n; cin >> n;
    printOctal(n);
}