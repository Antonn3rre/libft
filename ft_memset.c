#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	d;
	unsigned char	*str;

	i = 0;
	d = (unsigned char) c;
	str = (unsigned char *)s;

	while (i < n)
	{
		str[i] = d;
		i++;
	}
	return ((void *)str);
}

