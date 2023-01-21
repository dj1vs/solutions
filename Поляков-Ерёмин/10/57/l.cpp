#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << ((y>=x && y<=(2-(x*x)) || y<=(2-(x*x)) && y>=0) ? "YES" : "NO");
}