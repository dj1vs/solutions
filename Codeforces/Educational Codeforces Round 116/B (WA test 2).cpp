//2021-10-30 11:59:48
#include <iostream>
#include <cmath>
#include <utility>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        --n;
        if (!n) {
            cout << 0 << endl;
            continue;
        }
        for (int i = 1; i <= k; ++i) {
            n -= i;
            if (n <= 0) {
                cout << i;
                break;
            }
        }
        if (n > 0) {
            //cout << n << " " << k << endl;
            cout << k + (bool)(n % k) + n/k;
        }
        cout << endl;

        /*
        Входные данные
        4
        8 3
        6 6
        7 1
        1 1

        Выходные данные

        4
        3
        6
        0
        */
    }
}
