//2020-05-26 12:07:01
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#define gottagofast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
	gottagofast;
	int n; cin >> n;
	int a = n * 4;
	int p;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			p = (i + n / i) * 2;
			if (p < a) a = p;
		}
	}
	cout << a;
}
