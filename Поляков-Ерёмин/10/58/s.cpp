#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int a, b; cin >> a >> b;
	int g; int c = 0;
	while (a && b)
	{
		if (a > b) a = a % b;
		else b = b % a;
		c++;
	}
	cout << ((a) ? a : b) << " " << c;
}