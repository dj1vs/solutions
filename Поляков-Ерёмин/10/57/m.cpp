#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << (  (y<=(-1)*x && y>=((x*x)-2) || y>=((x*x)-2) && y<=x) ? "YES" : "NO");
}