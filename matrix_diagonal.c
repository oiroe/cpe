#include <stdio.h>

int	main(void)
{
	int	diman;
	int	i;
	int	j;
	int	sum;
	int	input;

	scanf("%d", &diman);
	i = 0;
	sum = 0;
	while (i < diman)
	{
		j = 0;
		while (j < diman)
		{
			scanf("%d", &input);
			if (i == j)
				sum += input;
			j++;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
