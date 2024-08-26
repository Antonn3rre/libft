#include "libft.h"

static int	get_size(int n)
{
	long num;
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		num = n;
		num = -num;
	}
	else
		num = n;
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

static char	*put_num(int n, int size, char *str)
{
	long	num;

	if (n < 0)
	{
		num = n;
		num = -num;
		str[0] = '-';
	}
	else
		num = n;
	str[size] = 0;
	size--;
	while (num > 0)
	{
		str[size] = num % 10 + 48;
		num /= 10;
		size--;
	}
	return (str);
}
char	*ft_itoa(int n)
{
	char	*str;
	int	size;

	if (n == 0)
	{
		str = malloc(sizeof(char) * 2);
		if (str == NULL)
			return NULL;
		str[0] = '0';
		str[1] = 0;
		return (str);
	}

	size = get_size(n);
	str = malloc(sizeof(char) * (size+ 1));
	if (str == NULL)
		return NULL;
	str = put_num(n, size, str);
	return (str);
}
