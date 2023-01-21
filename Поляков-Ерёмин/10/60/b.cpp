//NOT WORKING 19/21
#include <iostream>
#include <algorithm>
using namespace std;

float getAvg(int a, int b, int c, int d, int e) {
    return (a + b + c + d + e - min({a, b, c, d, e}) - max({a, b, c, d, e}))/3;
}

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    cout << min({a, b, c, d, e}) << " " << max({a, b, c, d, e}) << endl;

    cout.precision(2);
    cout << fixed << getAvg(a, b, c, d, e);

    return 0;
}