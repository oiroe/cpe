#include <stdio.h>

void	merge(int *arr, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int  L[n1], M[n2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		M[j] = arr[m + 1 + j];

	int i,j,k;
	i = 0;
	j = 0;
	k = 0;

	while (i < n1 && j < n2)
	{
		if (L[i] <= M[j])
		{
			arr[k] = L[i];
		}
		else
		{
			arr[k] = M[j];
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = L[j];
		j++;
		k++;
	}
}

void	merge_sort(int *arr, int l, int r)
{
	if (l < r)
	{
		int m;

		m = (l + r) / 2;
		merge_sort(arr, l, m);
		merge_sort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	partion(int *a, int start, int end)
{
	int i;
	int j;
	int p;

	i = start - 1;
	p = a[end];
	j = start;
	while (j <= end - 1)
	{
		if (a[j] < p)
		{
			i++;
			swap(&a[i], &a[j]);
		}
		j++;
	}
	swap(&a[i + 1], &a[end]);
	return (i + 1);
}

void	quick(int *a, int start, int end)
{
	int i;

	i = 0;
	if (start < end)
	{
		i = partion(a, start, end);
		quick(a, start, i - 1);
		quick(a, i + 1, end);
	}
}
