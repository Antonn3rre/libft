/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <agozlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:33 by agozlan           #+#    #+#             */
/*   Updated: 2024/08/26 16:04:06 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	if (!s[i])
		return (0);
	if (s[i] != c)
	{
		word++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != 0))
			word++;
		i++;
	}
	return (word);
}

static int	get_size(char const *s, char c, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

static char	fill_word(char *tab, char const *s, char c, size_t *i)
{
	size_t	y;

	y = 0;
	while (s[*i] && s[*i] != c)
	{
		tab[y] = s[*i];
		y++;
		(*i)++;
	}
	tab[y] = 0;
	return (s[*i]);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	word;
	size_t	i;
	size_t	x;

	if (!s)
		return (NULL);
	word = count_words(s, c);
	tab = malloc(sizeof(char *) * (word + 1));
	if (!tab)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[x] = malloc(sizeof(char) * (get_size(s, c, i) + 1));
			if (!tab[x])
				return (NULL);
			fill_word(tab[x], s, c, &i);
			x++;
			if (!s[i])
				break ;
		}
		i++;
	}
	tab[x] = 0;
	return (tab);
}
