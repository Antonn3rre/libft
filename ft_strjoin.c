/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:10:30 by agozlan           #+#    #+#             */
/*   Updated: 2024/11/24 16:19:50 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = 0;
	return (str);
}
