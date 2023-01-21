#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable:4996)
int main()
{
	int x, y, n;
	fscanf(stdin, "%i %i %i", &x, &y, &n);
	for (int i = 0; i < n; i++)
	{
		fprintf(stdout, "%i ", rand() % (y - x) + x);
	}
}