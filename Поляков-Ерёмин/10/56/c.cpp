#include <iostream>
int main()
{
	float a, b, c; std::cin >> a >> b >> c;
	a = a*a;
	b = a;
	a=a*a;
	c=a;
	a=a*b*c;
	fprintf(stdout, "%.3f", a);
}