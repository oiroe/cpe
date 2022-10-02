#include <stdio.h>
#include <string.h>

int	digitandpm(int s)
{
	if ((s >= '0' && s <= '9') || (s == '-' || s == '+'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	i;
	char	num[20];
	int	check;

	check = 1;
	fgets(num, 15, stdin);
	if (num[strlen(num) - 1] == '\n')
		num[strlen(num) - 1] = 0;
	if (num[0] != '+' || num[3] != '-' ||
			num[6] != '-' || num[10] != '-')
	{
		printf("your number is invalid\n");
		return (0);
	}
	i = 0;
	while (num[i] != 0 && check == 1 && i <= 15)
	{
		if (digitandpm(num[i]) == 0)
		{
			printf("your number is invalid\n");
			return (0);
		}
		i++;
	}
	printf("your number is valid\n");
	return (0);
}
