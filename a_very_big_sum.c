#include <stdio.h>

long aVeryBigSum(int ar_count, long *ar)
{
	long sum;
	int counter;

	counter = 0;
	while(counter < ar_count)
	{
		sum = sum + ar[counter++];
	}
	return sum;
}
