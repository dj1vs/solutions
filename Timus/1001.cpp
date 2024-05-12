// Accepted
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    unsigned long long n;
    std::vector <unsigned long long> numbers;

    while (cin >> n)
    {
        numbers.push_back(n);
    } 

    for (auto it = numbers.rbegin(); it != numbers.rend(); it++)
    {
        std::cout << fixed << setprecision(4) << sqrtl(*it) << '\n';
    }

}