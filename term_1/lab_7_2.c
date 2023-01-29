#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	n[5][50];
	char	buffM[50];
	char	buffE[50];
	float	Math[5], maxM = 0, minM;
	float	Eng[5], maxE = 0, minE;
	int	i, iMaxM = 0, iMinM = 0, iMaxE = 0, iMinE = 0;

	printf("Student #1 Name > ");
	fgets(n[0], 20, stdin);
	if (n[0][strlen(n[0]) - 1] == '\n')
		n[0][strlen(n[0]) - 1] = '\0';
	printf("Student #1 Math Score > ");
	fgets(buffM, 10, stdin);
	if (buffM[strlen(buffM) - 1] == '\n')
		buffM[strlen(buffM) - 1] = '\0';
	sscanf(buffM, "%f", &Math[0]);
	printf("Student #1 English Score > ");
	fgets(buffE, 10, stdin);
	if (buffE[strlen(buffE) - 1] == '\n')
		buffE[strlen(buffE) - 1] = '\0';
	sscanf(buffE, "%f", &Eng[0]);
	bzero(buffM, 50);
	bzero(buffE, 50);
	maxM = Math[0];
	minM = Math[0];
	maxE = Eng[0];
	minE = Eng[0];

	i = 1;
	while (i < 5)
	{
		printf("Student #%d Name > ", i + 1);
		fgets(n[i], 20, stdin);
		if (n[i][strlen(n[i]) - 1] == '\n')
			n[i][strlen(n[i]) - 1] = '\0';
		printf("Student #%d Math Score > ", i + 1);
		fgets(buffM, 10, stdin);
		if (buffM[strlen(buffM) - 1] == '\n')
			buffM[strlen(buffM) - 1] = '\0';
		sscanf(buffM, "%f", &Math[i]);
		printf("Student #%d English Score > ", i + 1);
		fgets(buffE, 10, stdin);
		if (buffE[strlen(buffE) - 1] == '\n')
			buffE[strlen(buffE) - 1] = '\0';
		sscanf(buffE, "%f", &Eng[i]);
		bzero(buffM, 50);
		bzero(buffE, 50);

		if (maxM < Math[i])
		{
			maxM = Math[i];
			iMaxM = i;
		}
		if (minM > Math[i])
		{
			minM = Math[i];
			iMinM = i; 
		}
		if (maxE < Eng[i])
		{
			maxE = Eng[i];
			iMaxE = i;
		}
		if (minE > Eng[i])
		{
			minE = Eng[i];
			iMinE = i;
		}
		i++;
	}
	printf("Math (Max) Name = %s Score = %.2f\n", n[iMaxM], maxM);
	printf("Math (Min) Name = %s Score = %.2f\n", n[iMinM], minM);
	printf("English (Max) Name = %s Score = %.2f\n", n[iMaxE], maxE);
	printf("English (Min) Name = %s Score = %.2f\n", n[iMinE], minE);
	return (0);
}
