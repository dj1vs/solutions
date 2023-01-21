#include <iostream>
#include <cmath>
using namespace std;

inline bool isPerfect(int n) {
    int sum = 1;
    int s = sqrt(n);
    for (int i = 2; i <= s; ++i) {
       if (!(n % i)) {
           sum += i + n/i;
           if (sum > n)
               return false;
       }
    }
    return sum == n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n; cin >> n;
    if (n < 6) {
        cout << 0 << endl;
        return 0;
    }
    int i = 2, j = 3;
    while (i * j <= n) {
        if (isPerfect(i*j)) {
            cout << i * j << " ";
        }
        i *= 2;
        j = i * 2 - 1;
    }
}