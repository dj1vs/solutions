#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	/*FILE* in_file = fopen("input.txt", "r");
	FILE* out_file = fopen("output.txt", "w");*/
	int a, b;
	int sum = 0;
	int multiply = 1;
	int i = 0;
	fscanf(stdin, "%i", &a);
	while (i < a)
	{
		fscanf(stdin, "%i", &b);
		sum += b;
		multiply *= b;
		i++;
	}
	fprintf(stdout, "%i %i", sum, multiply);
	/*fclose(in_file);
	fclose(out_file);*/
	return 0;
}