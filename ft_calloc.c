#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;
	size_t	total;

	i = 0;
 	if (nmemb != 0 && size > SIZE_MAX / nmemb)
        return (NULL);	
	total = nmemb * size;
	str = malloc(total);
	if (str == NULL)
		return NULL;
	while (i < total)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
