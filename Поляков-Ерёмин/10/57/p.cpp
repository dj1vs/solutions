#include <iostream>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << ( ((x<1 && y> 2*x*x && y > (1 - x)) || (x<1 && y< 2*x*x && y>(1-x) && x>0)) ? "YES" : "NO");
}