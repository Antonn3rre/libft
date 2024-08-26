#include "libft.h"

static int	get_size(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int	size;
	int	i;
	char	*str;

	i = 0;
	size = get_size(s);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return NULL;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

