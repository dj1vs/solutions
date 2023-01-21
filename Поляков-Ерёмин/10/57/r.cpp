#include <iostream>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << ( ( (x*x+y*y < 1) || (0<x && x<1 && 0<y && y<1) ) ? "YES" : "NO");
}