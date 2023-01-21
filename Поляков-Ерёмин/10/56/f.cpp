#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	float q, w; cin >> q >> w;
	cout << fixed << setprecision(3) << pow(q, w);
	return 0;
}