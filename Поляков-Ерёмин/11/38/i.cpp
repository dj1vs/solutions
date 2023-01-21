#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	bool isPrinted = false;
	
	int n, k;
	cin >> k >> n;
	
	vector <bool> primeCheck(n+1, true); 
	vector <int> primes;
	primeCheck[0] = primeCheck[1] = 0;
	
	for(int i = 2; i <= n; ++i)
	{
		if(primeCheck[i])
		{
			primes.push_back(i);
			for(int j = i * 2; j <= n; j += i)
			{
				primeCheck[j] = false;
			}
		}
	}
	for(int i = 0; i < (int)primes.size() - 1; i++)
	{
		if(primes[i] >= k && i && (primes[i-1] + primes[i+1])/2 == primes[i] 
		&& !((primes[i-1] + primes[i+1])%2))
		{
			isPrinted = true;
			cout << primes[i] << ' ';
		}
	}
	
	for(int i = primes[primes.size() - 1] + 2; ; i+=2)
	{
		bool isPrime = true;
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(!(i % j))
			{
				isPrime = false;
				break;
			}
			
		}
		if(isPrime)
		{
			if((i + primes[primes.size() -2]) / 2 == primes[primes.size() -1]  
			&& !((i + primes[primes.size() - 2])%2))
			{
				isPrinted = true;
				cout << primes[primes.size() - 1];
			}
			break;
		}
	}
	
	if(!isPrinted)
	{
		cout << 0;
	}
	
	cout << endl;
	return 0;
}