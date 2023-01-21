#include <iostream>
#include <cmath>
using namespace std;

void printDividers(int n)
{
	cout << "1 ";
	for (int i = 2; i <= n; ++i) {
		if (!(n % i)) {
			cout << i << ' ';
		}
	}
}
int main()
{
	int N; cin >> N;
	printDividers(N);
}