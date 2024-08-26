#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = i;
			k = 0;
			while (big[j] && little[k] && big[j] == little[k] && j < len)
			{
				j++;
				k++;
			}
			if (!little[k])
				return	((char *) (big + i));
		}
		i++;
	}
	return (NULL);
}
