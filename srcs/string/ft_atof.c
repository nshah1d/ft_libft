# include "libft.h"

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
