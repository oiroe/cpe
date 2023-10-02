#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	lamuto(int *a, int start, int end)
{
	int	i;
	int	j;
	int	p;

	i = start;
	p = a[end];
	j = start;
	while (j <= end - 1)
	{
		if (a[j] <= p)
		{
			swap(&a[j], &a[i]);
			i++;
		}
		j++;
	}
	swap(&a[i], &a[end]);
	return (i);
}

int	quick_selection(int *a, int start, int end, int k)
{
	int	s;

	if (start <= end)
	{
		s = lamuto(a, start, end);
		if (s == k - 1)
			return (a[s]);
		else if (s > start + k - 1)
			quick_selection(a, start, s - 1, k);
		else
			quick_selection(a, s + 1, end, k - 1 - s);
	}
}

int	main(void)
{
	int a[] = { 20, 35, 83, 107, 51, 14, 43, 72, 68, 95 };
	int n = sizeof(a) / sizeof(a[0]);
	int k = 1;

	while (k <= n)
	{
		printf("K smallest %d number : %d\n", k, quick_selection(a, 0, n - 1, k));
		k++;
	}
	return (0);
}
