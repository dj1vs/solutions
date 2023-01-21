#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
//2020-05-25 11:26:39
#include <set>
#include <cmath>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
	string a;
	cin >> a;
	bool heidi[5]{ 0,0,0,0,0 };
	for (int i = 0; i < a.size(); i++)
	{
		switch (a[i])
		{
		case 'h':
			heidi[0] = 1;
			break;
		case 'e':
			if(heidi[0])
			heidi[1] = 1;
			break;
		case 'i':
			if (heidi[0] && heidi[1] && !heidi[2]) heidi[2] = 1;
			if(heidi[0] && heidi[1] && heidi[2] && heidi[3]) heidi[4] = 1;
			break;
		case 'd':
			if (heidi[0] && heidi[1] && heidi[2]) heidi[3] = 1;
			break;
		}
	}
	cout << ((heidi[4]) ? "YES" : "NO");
}
