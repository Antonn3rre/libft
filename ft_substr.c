#include "libft.h"

//Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de la chaîne ’s’. Cette nouvelle chaîne commence à l’index ’start’ et a pour taille maximale ’len’.

#include <stdio.h>

static size_t	ft_strle(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;
	size_t	t_len;

	if (!s)
		return (NULL);
	s_len = ft_strle(s);
	if (start >= s_len)
	{
		str = malloc(sizeof(char));
		if (str)
			str[0] = 0;
		return (str);
	}
	if (len > s_len - start)
		t_len = s_len - start;
	else
		t_len = len;
	str = malloc(sizeof(char) * (t_len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = 0;
	return (str);
}
