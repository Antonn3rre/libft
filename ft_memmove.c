#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	char	*buf = 0;
	size_t	i;

	i = 0;
	d = (char *) dest;
	s = (const char *)src;

	while (i < n)
	{
		buf[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = buf[i];
		i++;
	}
	return (dest);
}
