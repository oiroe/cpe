#include <stdio.h>
#include <limits.h>

void	swap(int *s1, int *s2)
{
	int	temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(void)
{
	int	diman;

	scanf("%d", &diman);

	int	mat[diman];
	int	i;
	int	count_max2;
	int	count_min2;
	int	max1, max2;
	int	min1, min2;

	count_max2 = 0;
	count_min2 = 0;
	i = 0;
	while (i < diman)
	{
		scanf("%d", &mat[i]);
		i++;
	}
	i = 0;
	min1 = INT_MAX;
	max1 = INT_MIN;
	while (i < diman)
	{
		if (mat[i] > max1)
			max1 = mat[i];
		if (mat[i] < min1)
			min1 = mat[i];
		i++;
	}
	i = 0;
	min2 = INT_MAX;
	max2 = INT_MIN;
	while (i < diman)
	{
		if (mat[i] < min2 && mat[i] > min1)
		{
			min2 = mat[i];
			count_min2 = i;
		}
		if (mat[i] > max2 && mat[i] < max1)
		{
			max2 = mat[i];
			count_max2 = i;
		}
		i++;
	}
	swap(&mat[count_min2], &mat[count_max2]);
	i = 0;
	while (i < diman)
	{
		printf("%d ", mat[i]);
		i++;
	}
	printf("\n");
	return (0);
}
