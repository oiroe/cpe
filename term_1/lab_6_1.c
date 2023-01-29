#include <stdio.h>

size_t	mystrlen(char *a)
{
	size_t	i;

	i = 0;
	while (a[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*mystrcat(char *dest, char *src)
{
	int	i;
	int	led;

	i = 0;
	led = mystrlen(dest);
	while (src[i])
	{
		dest[led + i] = src[i];
		i++;
	}
	dest[led + i] = '\0';
	return (dest);
}

char	*mystrstr(const char *s, const char *tofind)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (s[i + j] == tofind[j])
		{
			if (tofind[j] == 0)
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	a[] = "mamameaw";
	char	b[20] = "cpe ";
	char	c[] = "is da best";

	printf("%d\n", mystrlen(a));
	printf("%s\n", mystrcat(b, c));
	printf("%s\n", mystrstr(a, "meaw"));
	return (0);
}
