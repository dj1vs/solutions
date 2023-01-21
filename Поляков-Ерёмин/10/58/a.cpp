#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, y; cin >> x >> y;
	int i = 0, q = x, w = y;
	x = abs(x);
	y = abs(y);
	while (i < y) {
		x=x+q;
		++i;
	}

    cout << (x + (q > 0 ? -q : q) ) * (w > 0 ? 1 : -1);
}