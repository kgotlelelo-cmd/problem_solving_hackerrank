int findmax(int ar_count, int *ar)
{
	int max;
	max = ar[0];
	for(int i = 1; i < ar_count;i++)
	{
		if(ar[i]>max)
			max = ar[i];
	}
	return max;
}

int birthdayCakesCandles(int ar_count,int *ar)
{
	int i;
	int candles;
	int j;

	i = max(ar_count,ar);
	j = 0;
	candles = 0;
	while(j<ar_count)
	{
		if(ar[j] == i)
			candles+=1;
		j++;
	}
	return candles;
}
