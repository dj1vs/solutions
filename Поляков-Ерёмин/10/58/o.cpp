#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	int c;
	while (n)
	{
		c = n / 10;
		while (c)
		{
			if (c % 10 == n % 10) break;
			c /= 10;
		}
		if (c)
		{
			cout << "YES";
			return 0;
		}
		else n /= 10;
	}
	cout << "NO";
}