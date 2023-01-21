#include <stdio.h>
#include <stdlib.h>
void bin(int n)
{
	if(n==0)
	return;
	bin(n/16);
	if(n>0)
	{
		if(n%16<10)
	fprintf(stdout, "%i", n%16);
	switch(n%16){
		case 10:
		fprintf(stdout, "A");	
		break;
		case 11:
		fprintf(stdout, "B");	
		break;
		case 12:
		fprintf(stdout, "C");	
		break;
		case 13:
		fprintf(stdout, "D");	
		break;
		case 14:
		fprintf(stdout, "E");	
		break;
		case 15:
		fprintf(stdout, "F");	
		break;
	}
    }
    else
	{
		if(n%16>-10)
	fprintf(stdout, "%i", (-1)*n%16);
	switch(n%16){
		case -10:
		fprintf(stdout, "A");	
		break;
		case -11:
		fprintf(stdout, "B");	
		break;
		case -12:
		fprintf(stdout, "C");	
		break;
		case -13:
		fprintf(stdout, "D");	
		break;
		case -14:
		fprintf(stdout, "E");	
		break;
		case -15:
		fprintf(stdout, "F");	
		break;
	}
	
}
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