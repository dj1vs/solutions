#include <stdio.h>
#include <math.h>
int main()
{
	FILE* in_file = fopen("input.txt", "r");
	FILE* out_file = fopen("output.txt", "w");
	int a;
	bool q = 0;
	int max = 0;
	int min = 100000;
	while(feof(in_file)==0){
		fscanf(in_file, "%i\n", &a);
		if(a>max && a%2 == 0)
		max = a;
		if(a<min && a%2 == 0 && a>0){
			min = a;
			q = true;
		}
	}
	if (q)
	fprintf(out_file, "%i %i", min, max);
	else
	fprintf(out_file, "0");
	fclose(in_file);
	fclose(out_file);
	return 0;
}