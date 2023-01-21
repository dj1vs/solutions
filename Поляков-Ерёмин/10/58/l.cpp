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
		answer += N % 10;
		N /= 10;
	}
	cout << answer;
}