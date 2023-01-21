#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int n = 1;
	int min = 0; int max = 0;
	while (n)
	{
		cin >> n;
		if ((!min || n < min) && n) min = n;
		if(n > max) max = n;
	}
	cout << min << " " << max;
}