#include <iostream>
using namespace std;

void printFrontwards(string n) {
	for (int i = 0; i < n.length(); ++i) {
		cout << n[i] << endl;
	}
}
int main()
{
	string number; cin >> number;
	printFrontwards(number);
}