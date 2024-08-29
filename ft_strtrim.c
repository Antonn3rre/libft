/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <agozlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:13:11 by agozlan           #+#    #+#             */
/*   Updated: 2024/08/29 14:43:33 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char s, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static int	check_end(char const *s1, char const *set, size_t j)
{
	while (s1[j])
	{
		if (!in_set(s1[j], set))
			return (0);
		j++;
	}
	return (1);
}

static int	get_size(char const *s1, char const *set, int i)
{
	size_t	size;

	size = 0;
	while (s1[i])
	{
		if (!in_set(s1[i], set))
			size++;
		else
		{
			if (check_end(s1, set, i))
				break ;
			size++;
		}
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;
	char	*str;
	size_t	j;

	i = 0;
	while (in_set(s1[i], set))
		i++;
	j = i;
	size = get_size(s1, set, i);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (str);
}
