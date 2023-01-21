//2020-05-27 19:28:29
//////////directories//////////


#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>




//////////defines//////////


//#define tests
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define s short
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define c1 cout << 1 << endl
#define c0 cout << 0 << endl




//////////namespace//////////

using namespace std;

/////////program///////////



void solve()
{
	int i, j;

	int x = 0;
	int o = 0;

	int xwin = 0;
	int owin = 0;

	string t[3];
	cin >> t[0] >> t[1] >> t[2];

	for (i = 0; i < 3; i++)
	{
		if (t[i] == "XXX") xwin++;
		if (t[i] == "000") owin++;
		if (t[0][i] == t[1][i] && t[0][i] == t[2][i])
		{
			if (t[0][i] == 'X') xwin++;
			else if (t[0][i] == '0') owin++;
		}
	}


	if (t[0][0] == t[1][1] && t[0][0] == t[2][2])
	{
		if (t[0][0] == 'X')xwin++;
		else if (t[0][0] == '0') owin++;
	}

	if (t[0][2] == t[1][1] && t[0][2] == t[2][0])
	{
		if (t[0][2] == 'X')xwin++;
		else if (t[0][2] == '0')owin++;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (t[i][j] == 'X') x++;
			else if (t[i][j] == '0')o++;
		}
	}


	if ( (xwin && owin) || o > x || (x > o && x != o + 1))
	{
		cout << "illegal";
		return;
	}

	if (x + o == 9 && !xwin && !owin)
	{
		cout << "draw";
		return;
	}

	if (xwin)
	{
		if( o != x) cout << " the first player won";
		else cout << "illegal";
		return;
	}


	if (owin)
	{
		if( o == x) cout << " the second player won";
		else  cout << "illegal";
		return;
	}

	if (x == o) cout << "first";
	else  cout << "second";


}





//////////main func////////

int main()
{
	fastio;
#ifdef tests
	int t;
	cin >> t;
	while (t--)
		solve();
#else
	solve();
#endif

}
