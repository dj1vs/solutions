#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int n = 1;
	int s = 0;
	int m = 1;
	while (n)
	{
		cin >> n;
		s += n;
		if(n) m *= n;
	}
	cout << s << " " << m;
}