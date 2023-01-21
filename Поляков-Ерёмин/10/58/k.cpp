#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N;
	int answer=0;
	cin >> N;
	while (N)
	{
		if (!((N % 10) % 2))
		{
			answer++;
		}
		N /= 10;
	}
	cout << answer;
}