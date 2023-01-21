#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int n, c; cin >> n;
	if (n < 4) cout << "0";
	else
	{
		c = 1;
		while (pow(2, c) <= n)
		{
			c++;
		}
		c--;
		c -= c % 2;
		for (int i = c; i > 1; i -= 2)
		{
			cout << (int)pow(2, i) << " ";
		}
	}
}