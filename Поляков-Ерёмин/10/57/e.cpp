#include <iostream>
using namespace std;
int main()
{
	int a, b, c; cin >> a >> b >> c;
	int equalAmount = (a == b) + (a == c) + (b == c);
	cout << equalAmount + (equalAmount == 1);
}