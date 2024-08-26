#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if ((char)c == s[i])
		return (char *)&s[i];
	while (i >= 0)
	{
		if ((char)c == s[i])
			return (char *)&s[i];
		i--;
	}
	return NULL;
}
