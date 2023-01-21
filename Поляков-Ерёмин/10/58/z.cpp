#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int n; cin >> n;
	vector <int> f = { 1, 1 };
	for (int i = 2; i < n; i++)
	{
		f.push_back(f[i - 1] + f[i - 2]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << f[i] << " ";
	}
}