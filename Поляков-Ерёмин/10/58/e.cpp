#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable:4996)
int main()
{
	int x, y, sum;
	fscanf(stdin, "%i %i", &x, &y);
	int i = x;
	sum = 0;
	while (i <= y)
	{
		sum = sum + (i * i);
		i++;
	}
	fprintf(stdout, "%i", sum);
}