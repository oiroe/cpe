#include <stdio.h>

int	myisalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	myisdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	checkname(int c)
{
	if (myisalpha(c) == 1 || myisdigit(c) == 1 || c == '-')
		return (1);
	return (0);
}

int	checkdomain(int c)
{
	if (myisalpha(c) == 1 || myisdigit(c) == 1 || c == '.' || c == '-')
		return (1);
	return (0);
}

int	main(void)
{
	int	i;
	char	s[50];
	int	passat;

	fgets(s, 40, stdin);
	if (s[strlen(s)] == '\n')
		s[strlen(s)] = '\0';
	i = 0;
	passat = 0;
	while (s[i] != 0)
	{
		if (checkname(s[i]) != 0 && passat == 0)
			i++;
		else if (checkname(s[i]) == 0 && passat == 0)
		{
			printf("your email is invalid\n");
			return (0);
		}
		if (s[i] == '@')
		{
			passat = 1;
			i++;
		}
		if (checkdomain(s[i]) != 0 && passat == 1)
			i++;
		else if (checkdomain(s[i]) == 0 && passat == 1)
		{
			printf("your email is invalid\n");
			return (0);
		}
	}
	if (passat == 0)
	{
		printf("your email is invalid\n");
		return (0);
	}
	printf("your email is valid\n");
	return (0);
}
