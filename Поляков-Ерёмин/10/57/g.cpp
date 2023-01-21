#include <iostream>
using namespace std;
int main()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int a; cin >> a;
	cout << ((a < 1 || a > 12) ? 0 : months[a-1]);
}