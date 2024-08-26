#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	d;
	unsigned char	*str;

	d = (unsigned char) c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == d)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
	

