#include <iostream>
#include <numeric>
using namespace std;
int main() {
    long m, n; cin >> m >> n;
     cout << "0,";
    long buf = gcd(m, n);
    while (buf != 1) {
        m /= buf;
        n /= buf;
        buf = gcd(m, n);
    }

    long z = n;
    long count2 = 0, count5 = 0;
    while (!(z % 2)) {
        z /= 2;
        ++count2;
    }

    while (!(z % 5)) {
        z /= 5;
        ++count5;
    }

    long predPeriodLen = max(count2, count5);

    for (int i = 0; i < predPeriodLen; ++i) {
        m = m * 10;
        cout << m / n;
        m = m % n;
    }


    if (z > 1) {
        cout << '(';
        long divider = 9, step = 1;
        while (divider % z) {
            ++step;
            divider = (divider % z) * 10 + 9;
        }

        for (int i = 1; i <= step; ++i) {
         
            m = m * 10;
            cout << m/n;
            m = m % n;
        }
        cout << ')';
    }

    
}