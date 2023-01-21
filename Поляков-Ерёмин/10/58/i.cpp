#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int sum;
	int t=0;
	int a, b;
	int i;
	int q;
	int k;
	fscanf(stdin, "%i %i", &a, &b);
	for (i = a; i <= b; i++)
	{
		sum = 0;
		k = 0;
		q = i;
		while (q != 0)
		{
			k++;
			q = q/10;
		}
		q = i;
		while (q != 0)
		{
			sum += pow(q%10, k);
			q = q / 10;
		}
		if (sum == i)
		{
			fprintf(stdout, "%i ", i);
			t++;
		}
	}
	if (t == 0)
	fprintf(stdout, "-1");
	return 0;
}