#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    int i, j;
    bool t = 0;
    cin >> a >> b;
    if(a % 2 == 0) a++;
    for(i = a; i<=b; i+=2)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0) break;
        }
        if(j == (int)sqrt(i)+1)
        {
            cout << i << " ";
            t=1;
        }
    }
    if(!t) cout << 0;
}