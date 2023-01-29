#include <stdio.h>

void	show(int odd[], int even[], int n_even, int n_odd)
{
	int	i;

	if (n_odd != 0)
	{
		i = 0;
		while (i < n_odd)
		{
			printf("%d ", odd[i]);
			i++;
		}
		printf("\n");
	}
	else
		printf("None\n");
	if (n_even != 0)
	{
		i = 0;
		while (i < n_even)
		{
			printf("%d ", even[i]);
			i++;
		}
		printf("\n");
	}
	else
		printf("None\n");
}

int	main(void)
{
	int	i, j;
	int	row, col;
	int	even, odd;
	int	i_odd, i_even;

	scanf("%d", &row);
	scanf("%d", &col);
	if (row == 0 || col == 0)
	{
		printf("None\n");
		return (0);
	}
	int	mat[row][col];
	even = 0;
	odd = 0;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			scanf("%d", &mat[i][j]);
			if (mat[i][j] % 2 == 0)
				even += 1;
			else
				odd += 1;
			j++;
		}
		i++;
	}
	int	even_mat[even];
	int odd_mat[odd];
	i_even = 0;
	i_odd = 0;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (mat[i][j] % 2 == 0)
			{
				even_mat[i_even] = mat[i][j];
				i_even++;
			}
			else
			{
				odd_mat[i_odd] = mat[i][j];
				i_odd++;
			}
			j++;
		}
		i++;
	}
	show(odd_mat, even_mat, even, odd);
	return (0);
}
