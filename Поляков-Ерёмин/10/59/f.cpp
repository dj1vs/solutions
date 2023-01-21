#include <iostream>
using namespace std;

void printRoman(int n) {

        string romanLetters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int romanValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        for (int i = 0; i < 13; ++i)
        {
            while(n - romanValues[i] >= 0)
            {
                cout << romanLetters[i];
                n -= romanValues[i];
            }
        }
}

int main()
{
	int N; cin >> N;
	printRoman(N);
}