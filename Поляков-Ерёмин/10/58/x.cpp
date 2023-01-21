#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int a, n; cin >> a >> n;
	int f = 1;
	if (n == 1)
	{
		cout << a;
		return 0;
	}
	if (!n)
	{
		cout << 1;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		f *= a;
	}
	cout << f;
}