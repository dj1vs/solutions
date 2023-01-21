#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int> d;
    int N;
    cin >> N;
    int s = 0;
    for(int i = 1;i<=N/2;i++)
    {
        if(N % i == 0)
        {
            s += i;
            d.push_back(i);
        }
    }
    if(s != N) cout << 0;
    else
    {
        for(int i  = 0;i<d.size();i++)
        {
            cout << d[i] << " ";
        }
    }
}
