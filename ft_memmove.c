/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:59:35 by agozlan           #+#    #+#             */
/*   Updated: 2024/11/12 10:01:33 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	if (str1 > str2)
	{
		i = 0;
		while (i < n)
		{
			str2[i] = str1[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while ((int)i > -1)
		{
			str2[i] = str1[i];
			i--;
		}
	}
	return (dest);
}
