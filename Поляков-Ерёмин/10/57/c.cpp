#include <iostream>
using namespace std;
int main()
{
	int a, b, c, max;
	std::cin >> a >> b >> c;
	if(a == b && b == c) {
		cout << 0;
		return 0;
	}
	max = std::max({a, b, c});
	if (max == a)
		cout << "A ";
	if (max == b)
		cout << "B ";
	if (max == c)
		cout << "C ";
}