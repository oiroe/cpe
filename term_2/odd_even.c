#include <stdio.h>

void	show(int mat[], int diman) //show the matrix, if matrix is none print "None"
{
	int	i;

	if (diman != 0)
	{
		i = 0;
		while (i < diman)
		{
			printf("%d ", mat[i]);
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
	scanf("%d", &col); //input dimansion from user
	if (row <= 0 || col <= 0) //error handling
	{
		printf("None\n");
		return (0);
	}
	int	mat[row][col]; //create matrix from user
	even = 0;
	odd = 0;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col) //go in the matrix
		{
			scanf("%d", &mat[i][j]); //recive the user input
			if (mat[i][j] % 2 == 0) //check if the input is even
				even += 1; //give the even token plus every time if it even
			else //or odd
				odd += 1; //give the odd token plus every time if it odd
			j++;
		}
		i++;
	}
	int	even_mat[even]; //create even array
	int odd_mat[odd]; //creat odd array
	i_even = 0;
	i_odd = 0;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col) //go in the matrix
		{
			if (mat[i][j] % 2 == 0) //check if the input is even
			{
				even_mat[i_even] = mat[i][j]; //give the even data into even array
				i_even++;
			}
			else //or odd
			{
				odd_mat[i_odd] = mat[i][j]; //give the odd data into odd array
				i_odd++;
			}
			j++;
		}
		i++;
	}
	show(odd_mat, odd);
	show(even_mat, even);
	return (0);
}
