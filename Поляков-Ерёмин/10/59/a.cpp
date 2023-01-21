#include <iostream>
using namespace std;

void printSymbols(int n) {
	for (int i = 0; i < n; ++i)
		cout << '-';
}
int main() {
	int N; cin >> N;
	printSymbols(N);

}