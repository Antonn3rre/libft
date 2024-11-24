/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:52:48 by agozlan           #+#    #+#             */
/*   Updated: 2024/11/24 16:11:40 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;
	size_t	total;

	i = 0;
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	str = malloc(total);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, total);
	return ((void *)str);
}
