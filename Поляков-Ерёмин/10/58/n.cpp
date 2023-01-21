#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N;
	cin >> N;
	while (N)
	{
		if ((N % 100) % 11 && N > 9)
		{
			cout << "NO";
			break;
		}
		N /= 10;
	}
	if (!N)
	{
		cout << "YES";
	}
}