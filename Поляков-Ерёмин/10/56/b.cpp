// (c) Dmitriy Trifonov, 2020-01-14
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int r; cin >> r;
	cout << fixed << setprecision(3) << (float)(3.1415*r*r )<< endl;
	cout << fixed << setprecision(3) << (float)(2*3.1415*r);
}