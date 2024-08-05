#include "libft.h"

void	ft_bzero(void *s, unsigned long int n)
{
	unsigned long int	i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
