#include <stdio.h>

typedef union t_float
{
	double value;
	unsigned char bytes[8];
}			Float64;
/*using union to change double value
into unsigned char that we can transalate it
easily*/

void	float_to_binary(double num, char *binary)
{
	Float64 converter;

	converter.value = num;
	for (int i = 7; i >= 0; i--) {
		for (int j = 7; j >= 0; j--) {
			if ((converter.bytes[i] >> j) & 1)
				binary[(7 - i) * 8 + (7 - j)] = '1';
			else
				binary[(7 - i) * 8 + (7 - j)] = '0';
		}	// means we checking is there are 0 or 1 and put it in array
	} // checking on each bytes and on each bits
	binary[64] = '\0'; // Null-terminate the string
}


int	main(void)
{
	double	num;
	char	binary[65]; // 64 bits + null terminator

	printf("input float number:");
	scanf("%lf", &num);
	float_to_binary(num, binary);
	printf("%s\n", binary);
	return 0;
}

