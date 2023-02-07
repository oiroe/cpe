#include <stdio.h>

int	main(void)
{
	int	diman;
	int	i;
	int	j;
	int	sum;
	int	input;

	scanf("%d", &diman); //recive dimansion of array from user
	i = 0;
	sum = 0;
	while (i < diman)
	{
		j = 0;
		while (j < diman) //loop matrix
		{
			scanf("%d", &input); //recive data from user
			if (i == j) //if it diaginal (1, 1), (2, 2)
				sum += input; //give a sum = sum + input to keep the data
			j++;
		}
		i++;
	}
	printf("%d\n", sum); //output
	return (0);
}
