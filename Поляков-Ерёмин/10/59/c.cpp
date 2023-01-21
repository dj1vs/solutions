#include <iostream>
using namespace std;

void printBackwards(string n) {
	for (int i = n.length() - 1; i != -1; --i) {
		cout << n[i] << endl;
	}
}
int main()
{
	string number; cin >> number;
	printBackwards(number);
}