#include <stdio.h>

double	findMean(int array[], int size)
{
	double	sum;
	int	i;
	double	mean;

	sum = 0;
	i = 0;
	while (i < size)
	{
		sum = sum + array[i];
		i = i + 1;
	}
	mean = sum / i;
	return (mean);
}

int	findMinElement(int array[], int size)
{
	int	min;
	int	i;

	min = array[0];
	i = 0;
	while (i < size)
	{
		if (min > array[i])
		{
			min = array[i];
		}
		i = i + 1;
	}
	return (min);
}

int	findMaxIndex(int array[], int size)
{
	int	max;
	int	i;
	int	index;

	max = array[0];
	i = 0;
	while (i < size)
	{
		if (max < array[i])
		{
			max = array[i];
			index = i + 1;
		}
		i = i + 1;
	}
	return (index);
}

int	getSelectMenu(void)
{
	printf("Menu\n");
	printf("1 - Find the average value of all the numbers in the array\n");
	printf("2 - Find the minimum value in the array\n");
	printf("3 - Find the index of the maximum value in the array\n");
	printf("4 - User User input array\n");
	printf("5 - Display the array\n");
	printf("6 - Exit\n");
	printf("Please select an option (1-6) > ");

	int selectedMenu;

	scanf("%d", &selectedMenu);
	return (selectedMenu);
}

void	displayarray(int array[], int size)
{
	printf("Your array contain :\n");
	for (int i = 0; i < size; i++)
		{
			printf("%d\n",array[i]);
		}
	printf("\n");
}

int	getArrayFromUser(int array[], int size)
{
	printf("Input size of array = ");
	scanf("%d", &size);

	int	numbers[size];
	int	input;
	
	for (int i = 0; i < size; i++)
	{
		printf("Input number %d = ", i + 1);
		scanf("%d", &input);
		numbers[i] = input;
	}

	int	menu = getSelectMenu();

	while (menu != 6)
	{	
		if (menu == 1)
		{
	    		printf("Mean = %2lf\n\n", findMean(numbers, size));
		}
		else if (menu == 2)
		{
	    		printf("Min = %d\n\n", findMinElement(numbers, size));
		}
		else if (menu == 3)
		{
			printf("Max Index = %d\n\n", findMaxIndex(numbers, size));
		}
		else if (menu == 4)
		{
			menu = getArrayFromUser(numbers, size);
		}
		else if (menu == 5)
		{
			displayarray(numbers, size);
		}
		if (menu != 6)
		{
			menu = getSelectMenu();
		}
	}
	return (menu);
}

int	main(void) 
{
	int	numbers[5] = {3, 9, -2, 7, 1};
	int	size = 5;
	int	menu = getSelectMenu();

	while (menu != 6)
	{	
		if (menu == 1)
		{
	    		printf("Mean = %2lf\n\n", findMean(numbers, size));
		}
		else if (menu == 2)
		{
	    		printf("Min = %d\n\n", findMinElement(numbers, size));
		}
		else if (menu == 3)
		{
			printf("Max Index = %d\n\n", findMaxIndex(numbers, size));
		}
		else if (menu == 4)
		{
			menu = getArrayFromUser(numbers, size);
		}
		else if (menu == 5)
		{
			displayarray(numbers, size);
		}
		if (menu != 6)
		{
			menu = getSelectMenu();
		}
	}
	return (0);
}
