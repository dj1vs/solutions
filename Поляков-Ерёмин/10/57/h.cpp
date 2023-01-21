#include <iostream>
using namespace std;
int main()
{
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int month, day; cin >> month >> day;
	if (day < 1 || day > months[month - 1] || month < 1 || month > 12) {
		cout << -1; return 0;
	}
	int daysUntilNewYear = months[month-1] - day;
	for (int i = month + 1; i <= 12; ++i)
		daysUntilNewYear += months[i-1];
	cout << daysUntilNewYear;



}