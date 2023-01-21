#include <stdio.h>
int main()
{
	int c;
	c = 0;
	int i;
	int q;
	int N;
	int min;
	int a[1000];
	fscanf(stdin,"%i", &N);
	for(i = 0;i<N;i++)
	{
		fscanf(stdin,"%i", &a[i]);
	}
	for(i = 0;i<N;i++)
	{
		for(q=0;q<N-1;q++)
		{
		if(a[q+1]%10 < a[q]%10)
		{
		c = a[q];
		a[q]=a[q+1];
		a[q+1]=c;
	}
	}
}
		for(i = 0;i<N;i++)
	{
		fprintf(stdout,"%i ", a[i]);
	}
}