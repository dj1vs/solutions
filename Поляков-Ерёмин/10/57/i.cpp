#include <iostream>
using namespace std;
int main()
{
	float x, y; cin >> x >> y;
	cout << (y <= 1);
	cout << (y<=(-1)*x);
	cout << (((x*x) + (y*y))<=1);
	cout << (((x-1)*(x-1) + (y*y))<=1);
}