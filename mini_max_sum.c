void miniMaxSum(int arr_count, int *arr)
{
	long max;
	long min;
	long i;
	long j;
	long temp;

	i = 0;
	j = 0;
	max = 0;
	min = 0;

	for(i = 1;i<arr_count;i++)
	{
		temp = arr[i];
		j = i - 1;
		while(j>=0 && arr[j] >temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]= temp;
	}
	i = 0;
	while(i<(arr_count-1))
	{
		min = min + arr[i];
		i++;
	}
	j = arr_count-1;
	while(j>0)
	{
		max = max + arr[j--];
	}
	printf("%ld %ld" ,min , max);
}
