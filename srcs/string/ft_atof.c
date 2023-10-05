# include "libft.h"
#include <stdio.h>

double	ft_atof(const char *str)
{
	double res;
	double res2;
	char *c;
	int len;
	int sign;

	len = 0;
	c = (char *)str;
	sign = 1;
	if (*c == '-')
	{
		sign = -1;
		c++;
	}
	res = (double)ft_atoi(c);
	while (*c && *c != '.')
		c++;
	if (*c == '.')
		c++;
	res2 = (double)ft_atoi(c);
	while (ft_isdigit(*(c++)))
		len++;
	while (len--)
		res2 /= 10;
	return (sign * (res + res2));
}

#include <stdlib.h>

int main()
{
	const char *test_cases[] =
	{
		"12.00003",			// Should return 12.000030
		"3.14159265",		// Should return 3.141593
		"0.12345",			// Should return 0.123450
		"12.34.56",			// Should return 12.340000
		"12.10.34.56",		// Should return 12.000000
		"12345",			// Should return 12345.000000
		"0.0",				// Should return 0.000000
		"0.00000",			// Should return 0.000000
		"12345.6789",		// Should return 12345.678900
		"-12.345",			// Should return -12.345000
		"-0.12345",			// Should return -0.123450
		"-12345.6789",		// Should return -12345.678900
		"  123.123asdasd",	// Should return 123.123000
		"  12a3.123asdasd"	// Should return 12.000000
	};
	for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
	{
		const char *test_case = test_cases[i];
		double result = ft_atof(test_case);
		double other = atof(test_case);
		printf("Input: %s\n", test_case);
		printf("FT_ATOF Result: %lf\n", result);
		printf("ATOF Result: %lf\n", other);

		printf("\n");
	}
	return (0);
}
