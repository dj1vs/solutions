#include <iostream>
#include <cmath>
int main()
{
	float x1, x2, y1, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	printf("%.3f", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));
	return 0;
}