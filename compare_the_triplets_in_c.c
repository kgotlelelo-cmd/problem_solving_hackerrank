#include <stdio.h>
#include <stdlib.h>

int *compareTriplets(int *a, int *b)
{
	int *results;
	int i;


	results = malloc(sizeof(int)*2);
	for(i = 0; i<2;i++)
	{
		results[i] = 0;
	}
	for(i = 0;i <3;i++)
	{
		if(a[i] > b[i])
		{
			results[0] = results[0] + 1;
		}
		else if(a[i]<b[i])
		{
			results[1] = results[1] + 1;
		}
	}
	return results;
}

int main()
{
	int a[3];
	int b[3];
	int i;
	int *results;
	results = malloc(sizeof(int)*2);

	scanf("%d %d %d", &a[0],&a[1],&a[2]);
	scanf("%d %d %d", &b[0],&b[1],&b[2]);

	results = compareTriplets(a,b);
	for(i = 0; i <2;i++)
	{
		printf("%d ",results[i]);
	}
	putchar('\n');
	return 0;
}
