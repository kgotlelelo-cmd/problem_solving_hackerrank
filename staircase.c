void staircase(int n)
{
	int rows;
	int col;

	rows = 0;
	col = 0;
	while(rows < n)
	{
		while(col < n)
		{
			if(col >= (n-1-rows))
				printf("#");
			else
				printf(" ");
			col++;
		}
		printf("\n");
		rows++;
		col = 0;
	}
}

