//2020-04-09 10:27:04
#include <iostream>
using namespace std;
int main()
{
	__int64 l, w;
	__int64 n, m, a;
	cin >> n >> m >> a;
    __int64 s = n * m;
	__int64 p = a * a;
		if (!(n % a)) l = n / a;
		else l = (n / a) + 1;
		if (!(m % a)) w = m / a;
		else w = (m / a) + 1;
		cout << l*w;
}
