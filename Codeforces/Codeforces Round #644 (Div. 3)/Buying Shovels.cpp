//2020-05-24 18:16:20
#include <iostream>
#include <cmath>
//#include <set>
//#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	int n, k;
	int i, j;
	int min;
	vector <int> a;
	while (t--)
	{
		cin >> n >> k;
		min = n;
		if (k >= n) cout << 1 << endl;
		else if (k == 1) cout << n << endl;
		else
		{
			for (i = 2; i <= sqrt(n); i++)
			{
				if (n % i == 0)
				{
					if (i <= k)
					{
						//cout << 1;
						if (n/i < min) min = n/i;
					}
					if(n/i <= k)
					{
						//cout << 0;
						if (i < min) min = i;
					}
				}
			}
			cout << min << endl;
		}
	}
}
