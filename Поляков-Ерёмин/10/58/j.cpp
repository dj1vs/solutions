#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	bool t = 1;
	cin >> a >> b;
	for (int i = a; i <= b; i++) 
	{
		int c = i;
		int d = 0;
		while (c)
		{
			c /= 10;
			d++;
		}
		if (i * i % (int)pow(10, d) == i)
		{
			cout << i << " ";
			t = 0;
		}
	}
	if (t)
	{
		cout << -1;
	}
}