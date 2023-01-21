#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << ((y<=x && ((y*y) + (x*x) <= 1) || ((y*y) + (x*x) <= 1) && y>=(-1)*x) ? "YES" : "NO");
}