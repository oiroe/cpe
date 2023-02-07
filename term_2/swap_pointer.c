#include <stdio.h>
#include <limits.h>

void	swap(int *s1, int *s2) //swap the element of the array using pointer
{
	int	temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(void)
{
	int	diman;

	scanf("%d", &diman); //recive the dimansion of array

	int	mat[diman];
	int	i;
	int	count_max2;
	int	count_min2;
	int	max1, max2;
	int	min1, min2;

	count_max2 = 0;
	count_min2 = 0;
	i = 0;
	while (i < diman) //recive the input of data
	{
		scanf("%d", &mat[i]);
		i++;
	}
	i = 0;
	min1 = INT_MAX;
	max1 = INT_MIN;
	while (i < diman) //in here we check the first max/min value
	{
		if (mat[i] > max1) //in here we use the easy compare, if the mat[i] is more than max1 then mat[i] will become the max1
			max1 = mat[i];
		if (mat[i] < min1) //in here we use the easy compare, if the mat[i] is less than min1 then mat[i] will become the min1
			min1 = mat[i];
		i++;
	}
	i = 0;
	min2 = INT_MAX;
	max2 = INT_MIN;
	while (i < diman) //in here we check the second max/min value
	{
		if (mat[i] < min2 && mat[i] > min1) //if the mat[i] is less than min2 and mat[i] is more than first min then mat[i] will become the min2
		{
			min2 = mat[i];
			count_min2 = i; //I need to store the index token I think it will easy to use
		}
		if (mat[i] > max2 && mat[i] < max1) //if the mat[i] is more than max2 and mat[i] is less than first max then mat[i] will become the max2
		{
			max2 = mat[i];
			count_max2 = i; //I need to store the index token I think it will easy to use
		}
		i++;
	}
	swap(&mat[count_min2], &mat[count_max2]); //swap the second max/min in the array with pointer
	i = 0;
	while (i < diman) //show the matrix
	{
		printf("%d ", mat[i]);
		i++;
	}
	printf("\n");
	return (0);
}
