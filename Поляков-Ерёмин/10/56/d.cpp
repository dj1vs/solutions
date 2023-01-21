#include <iostream>
int main()
{
	int q; std::cin >> q;
	std::cout << q/100 << " " << q/10 - (q/100)*10 << " " << q % 10;
}