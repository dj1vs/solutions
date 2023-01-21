#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	int q, w, e;
	scanf("%i %i", &q, &w);
	e = w-q;
	for (int i = 0; i<5; i++) {
		cout << q+ rand() % e << " ";
	}
	return 0;
}