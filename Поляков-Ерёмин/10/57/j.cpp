#include <iostream>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << ((x*x + y*y >=4 && x<=2 && y<=x && y>=0 && x>=0) ? "YES" : "NO");
}