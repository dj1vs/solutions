#include <iostream>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << (( y<1 && x>0 && y>(x-1) || ((x*x)+(y*y) < 1) && x>0) ? "YES" : "NO");
}