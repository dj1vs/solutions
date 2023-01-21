#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t;
	int q;
	int i;
	int a, b;
	fscanf(stdin, "%i %i", &a, &b);
	for (i = a; i <= b; i++)
	{
		t = 0;
		q = i;
		while (q != 0)
		{
			if ((q%10)!=0 && i % (q % 10) != 0 || q%10 == 0)
				t--;
			q = q / 10;
		}
		if (t == 0)
		fprintf(stdout, " %i", i);
	}
	return 0;
}