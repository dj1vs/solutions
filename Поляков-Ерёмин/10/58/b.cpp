#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable:4996)
int main()
{
	int x, sum;
	int i = 0;
	sum = 0;
	fscanf(stdin, "%i", &x);
	while (i <= x)
	{
		sum += i;
		i++;
	}
	fprintf(stdout, "%i", sum);
}