#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
	cout << min({a, b, c, d, e}) << endl << max({a, b, c, d, e});
	return 0;
}