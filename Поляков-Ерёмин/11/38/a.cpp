#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <bool> primes(n+1, true);
    primes[0] = primes[1] = false;
    for(int i = 2; i < n + 1; i++)
    {
        if(primes[i])
        {
            cout << i << " ";
            for(int j = i*2; j < n+1; j += i)
            {
                primes[j] = false;
            } 
        }
    }
}