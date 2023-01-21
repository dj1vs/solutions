#include <stdio.h>
#include <math.h>
int main()
{
	FILE* in_file = fopen("input.txt", "r");
	FILE* out_file = fopen("output.txt", "w");
	int a;
	int i = 0;
	int sum = 0;
	float c;
	while(feof(in_file)==0){
		fscanf(in_file, "%i\n", &a);
		sum = sum+a;
		i++;
	}
	fprintf(out_file, "%.3f",(float)(sum)/(float)(i));
	fclose(in_file);
	fclose(out_file);
	return 0;
}