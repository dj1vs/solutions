#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;

int main() {
    int a, b, c, N;
    cin >> a >> b >> c >> N;
    vector <array<int, 3>> v;
    for (int i = 0; i <= N/a; ++i) {
        for (int j = 0; j <= (N - i * a)/b; ++j) {
            for (int k = 0; k <= (N - i * a - j * b)/c; ++k) {
                if (i *a + b * j + k * c == N) {
                    v.push_back({i, j, k});
                }
            }
        }
    }
    cout << v.size() << endl;
    for (auto &i : v) {
        for (auto &j : i)
            cout << j << " ";
        cout << '\n';
    }
    
}