#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable:4996)
int main()
{
	int x;
	int i = 1;
	fscanf(stdin, "%i", &x);
	while (i <= x)
	{
		fprintf(stdout, "%i ", 2*i);
		i++;
	}
}