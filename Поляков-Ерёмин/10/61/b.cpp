#include <stdio.h>
#include <stdlib.h>
void bin(int n)
{
	if(n==0)
	return;
	bin(n/8);
	if(n>0)
	fprintf(stdout, "%i", n%8);
	else
	fprintf(stdout, "%i", (-1)*n%8);
}
int main()
{
	int N;
	fscanf(stdin, "%i", &N);
	if(N<0)
	fprintf(stdout, "-");
	bin(N);
	if(N==0)
	fprintf(stdout, "0");
}