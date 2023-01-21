//2020-06-04 12:48:25
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
typedef long long int ll;
typedef short int s;
using namespace std;
int main()
{
	bool normal = 0;
	int i, j;
	int d;
	int n;
	cin >> n;
	string a;
	string ans;
	while (n--)
	{
		d = 0; ans = "";
		cin >> a;
		normal = true;

		for (i = 1; i < a.size(); i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
			{
				for (j = i + 1; j < a.size(); j++)
				{
					if (a[j] > '9')
						normal = false;
					break;
				}
			}
			if (normal == false) break;
		}
		if (normal == true)
		{
			int lsum = 0;
			for (i = 0; a[i] > '9'; i++)
			{
				if (i == 0) lsum += a[i] - 'A' + 1;
				else lsum = lsum * 26 + a[i] - 'A' + 1;
			}
			ans += "R";
			for (i; i < a.size(); i++)
				ans += a[i];
			ans = ans + "C" + to_string(lsum);
			for (i = 0; i < ans.size(); i++)
			{
				if ((ans[i] >= '0' && ans[i] <= '9') || (ans[i] >= 'A' && ans[i] <= 'Z'))
					cout << ans[i];
			}
			cout << endl;
		}
		else
		{
			__int64 r = 0;
			int lsum = 0;
			for (i = 1; a[i] != 'C'; i++)
			{
				r *= 10;
				r += a[i] - '0';
			}
			for (i = i + 1; i < a.size(); i++)
			{
				lsum *= 10;
				lsum += a[i] - '0';
			}
			string c = "";
			while (lsum > 0)
			{
				char a = lsum % 26 + 'A' - 1;
				if(a != '@')c += a;

				else
				{
					c += 'Z';
					lsum -= 26;
				}
				lsum /= 26;
			}
			for (i = c.size(); i >= 0; i--)
				if (c[i] >= 'A' && c[i] <= 'Z')cout << c[i];
			cout << r << endl;

		}
	}

}
