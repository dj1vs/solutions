//2020-05-24 18:32:07
#include <iostream>
#include <cmath>
#include <string>
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
	int n;
	bool ans;
	int i, j;
	string a;
	vector < vector <bool>> p;
	while (t--)
	{
		ans = 1;
		cin >> n;
		p.resize(n, vector<bool>(n));
		for (i = 0; i < n; i++)
		{
			cin >> a;
			for (j = 0; j < n; j++)
			{
				p[i][j] = a[j] - '0';
			}
		}
		for (i = 0; i < n-1; i++)
		{
			for (j = 0; j < n-1; j++)
			{
				if (p[i][j])
				{
				  if (!p[i][j + 1] && !p[i + 1][j]) ans = 0;
				}
				if (!ans) break;
			}
			if (!ans) break;
		}
		if (!ans) cout << "NO\n";
		else cout << "YES\n";
	}
}
