//2021-10-30 02:16:39
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s[0] == s.back())
            cout << s;
        else {
            s.pop_back();
            cout << s << s[0];
        }
        cout << endl;
    }
}

/*
 * aaa - aba X
 * aaa - baa
 *
 *
 */
