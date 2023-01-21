#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	if (n < 2) cout << "0";
	else
	{
		n = n - n % 2;
		while (n>1)
		{
			cout << (int)pow(2, n) << " ";
			n -= 2;
		}
	}
}