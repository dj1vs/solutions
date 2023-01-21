#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        vector <int> v;
        for (int j = 0; j < N; ++j)
        {
            int buf; cin >> buf;
            if (buf) v.push_back(j+1);
        }
        if (!v.size()) cout << 0;
        else for (int k = 0; k < v.size(); ++k)
            cout << v[k] << " ";
        cout << endl;
    }
    return 0;
}