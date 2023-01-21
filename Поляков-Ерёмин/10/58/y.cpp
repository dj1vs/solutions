#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int n; cin >> n;
	vector <int> d;
	while (n)
	{
		d.push_back(n % 10);
		n /= 10;
	}
	for (int i = d.size() - 1; i >= 0; i--)
	{
		cout << d[i] << " ";
	}
}