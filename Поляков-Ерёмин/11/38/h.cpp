#include <vector>
#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;
int main()
{
    int k, n;
    cin >> k >> n;
    bool printed = false;
    vector <bool> primes(n * 2 + 3, true);
    primes[0] = primes[1] = false;
    for(int i = 0; i < n * 2 + 3; i++)
    {
        if(primes[i])
        {
            for(int j = i*2; j < n * 2 + 3; j += i)
            {
                primes[j] = false;
            } 
        }
    }
    for(int i = k; i <= n; i++)
    {

        if(primes[i] && primes[i*2 + 1])
        {
            printed = true;
            cout << i << " " ;
        }
    }
    if(!printed)
        cout << 0;
    return 0;
}