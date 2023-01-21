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
    vector <bool> primes(n+1, true);
    primes[0] = primes[1] = false;
    for(int i = 2; i < n + 1; i++)
    {
        if(primes[i])
        {
            string num = to_string(i);
            bool reversed = true;
            for(int i = num.size() - 1; i > 0; i--)
            {
                if(num[i] >= num[i-1])
                {
                    reversed = false;
                    break;
                }
            }
            if(i >= k && reversed)
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