#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a, b, c, d;
	int q = 0;
	fscanf(stdin, "%i %i\n%i %i", &a, &b, &c, &d);
	for (int i = 10000; i < 100000; i++)
	{
		if (i % a == b && i % c == d){
		
			fprintf(stdout, "%i ", i);
			q++;}
	}
	if(q == 0)
	fprintf(stdout, "-1");
}