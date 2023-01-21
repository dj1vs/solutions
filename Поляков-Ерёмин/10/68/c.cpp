#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	FILE* in_file = fopen("input.txt", "r");
	FILE* out_file = fopen("output.txt", "w");
	int a;
	int w = 1;
	int b;
	int max = 1;
	fscanf(in_file, "%i\n", &a);
	while (feof(in_file) == 0) {
		fscanf(in_file, "%i\n", &b);
		if (a == b) {
			if (w == 0)
				w += 2;
			else
				w++;
			if (w >= max)
				max = w;
		}
		else
		{
			w = 0;
		}
		a = b;
	}
	fprintf(out_file, "%i", max);
	fclose(in_file);
	fclose(out_file);
	return 0;
}