/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <agozlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:08:33 by agozlan           #+#    #+#             */
/*   Updated: 2024/08/26 16:08:50 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strle(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_src;
	size_t	size_dest;
	size_t	i;
	size_t	j;

	size_dest = ft_strle(dest);
	size_src = ft_strle(src);
	if (size <= size_dest)
		return (size + size_src);
	i = size_dest;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (size_dest + size_src);
}
