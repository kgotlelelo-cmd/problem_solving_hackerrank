int diagonalDifference(int arr_rows, int arr_columns,int **arr)
{
	int right_sum;
	int left_sum;
	int i;
	int j;

	right_sum = 0;
	left_sum = 0;
	i = 0;
	j = 0;
	while(i < arr_rows)
	{
		right_sum+= arr[i][j];
		i++;
		j++;
	}
	i = 0;
	while(arr_columns--)
	{
		left_sum+= arr[i][arr_columns];
		i++;
	}
	if(right_sum >= left_sum)
	{
		return(right_sum - left_sum);
	}
	else
		return (left_sum - right_sum);
}
