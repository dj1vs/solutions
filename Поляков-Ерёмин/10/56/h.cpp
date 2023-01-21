#include <iostream>
#include <cstdlib>
#include <cmath>
int main()
{
	float a, b; int i = 0;
	std::cin >> a >> b;
	while (i < 5) {
		fprintf(stdout, "%.3f ", fmod(rand(), b-a) + a);
		i++;
	}
	return 0;
}