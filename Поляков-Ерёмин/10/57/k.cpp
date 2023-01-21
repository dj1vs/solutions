#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << ( (y<=sin(x) && y>=0 && y<=0.5 && x>=0 && x<=(2*3.1415)) ? "YES" : "NO");
}