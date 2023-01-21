#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int k, n;
    cin >> k >> n;
    bool printed = false;
    vector <bool> primes(n+1, true);
    primes[0] = primes[1] = false;
    for(int i = 2; i < n + 1; i++)
    {
        if(primes[i])
        {
            if(i >= k && i % 10 == 3)
            {
                cout << i << " ";
                printed = true;
            }
            for(int j = i*2; j < n+1; j += i)
            {
                primes[j] = false;
            } 
        }
    }
    if(!printed)
        cout << 0;
    return 0;
}