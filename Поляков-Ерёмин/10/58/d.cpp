#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable:4996)
int main()
{
	int x, y;
	fscanf(stdin, "%i %i", &x, &y);
	int i = x;
	while (i <= y)
	{
		fprintf(stdout, "%i*%i=%i\n", i, i, i*i);
		i++;
	}
}