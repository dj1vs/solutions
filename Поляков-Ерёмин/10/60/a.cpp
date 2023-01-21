#include <iostream>
using std::cin, std::cout;

int min(int a, int b) {
    return a < b ? a : b; 
}
int min(int a, int b, int c) {
    return min(min(a, b), c);
}

int main() {
    int a, b, c; cin >> a >> b >> c;
    cout << min(a, b, c);
}