/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:55:34 by agozlan           #+#    #+#             */
/*   Updated: 2024/11/12 10:59:23 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strle(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*create_str(size_t len, size_t s_len, unsigned int start)
{
	char	*str;
	size_t	t_len;

	if (len > s_len - start)
		t_len = s_len - start;
	else
		t_len = len;
	str = malloc(sizeof(char) * (t_len + 1));
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;

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
	str = create_str(len, s_len, start);
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
