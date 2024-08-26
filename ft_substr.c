/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <agozlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:14:27 by agozlan           #+#    #+#             */
/*   Updated: 2024/08/26 16:15:01 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
