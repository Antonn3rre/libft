#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	size_t	i;

	i = 0;
	d = (char *)dest;
	s = (const char *) src;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
