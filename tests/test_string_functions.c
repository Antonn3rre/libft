/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agozlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:06:34 by agozlan           #+#    #+#             */
/*   Updated: 2024/11/12 10:45:32 by agozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("FT_STRLEN\n");
	printf("Norm : %zu,%zu,%zu,%zu\n", strlen("Bonjour"), strlen(""), strlen("Hell0 world\n"), strlen("i"));
	printf("Mine : %zu,%zu,%zu,%zu\n", ft_strlen("Bonjour"), ft_strlen(""), ft_strlen("Hell0 world\n"), ft_strlen("i"));

	printf("FT_ITOA\n");
	printf("Expe : 12,0,-2147483648,2147483647,-456\n");
	printf("Mine : %s,%s,%s,%s,%s\n", ft_itoa(12), ft_itoa(0), ft_itoa(-2147483648), ft_itoa(2147483647), ft_itoa(-456));
	
	printf("FT_ATOI\n");
	printf("Norm : %d,%d,%d,%d\n", atoi("    +-+-+-+-+-+123e5"), atoi("  +456789"), atoi("-2147483648"), atoi("   2147483647daaa"));
	printf("Mine : %d,%d,%d,%d\n", ft_atoi("    +-+-+-+-+-+123e5"), ft_atoi("  +456789"), ft_atoi("-2147483648"), ft_atoi("   2147483647daaa"));

	printf("FT_SPLIT\n"); // a faire

	printf("FT_STRCHR\n");
	printf("Norm : %s,%s,%s,%s\n", strchr("Bonjour", 'c'), strchr("Bonjour", 'o'), strchr("", 'g'), strchr("Bonjour", 114));
	printf("Mine : %s,%s,%s,%s\n", ft_strchr("Bonjour", 'c'), ft_strchr("Bonjour", 'o'), ft_strchr("", 'g'), ft_strchr("Bonjour", 114));
	
	printf("FT_STRRCHR\n");
	printf("Norm : %s,%s,%s,%s\n", strrchr("Bonjour", 'c'), strrchr("Bonjour", 'o'), strrchr("", 'g'), strrchr("Bonjour", 114));
	printf("Mine : %s,%s,%s,%s\n", ft_strrchr("Bonjour", 'c'), ft_strrchr("Bonjour", 'o'), ft_strrchr("", 'g'), ft_strrchr("Bonjour", 114));

	printf("FT_STRLCPY\n");   //marche pas
//	char dest[20];
	
//	printf("Expe : %s,%s,%s,%s", strlcpy(dest, "Bonjour", 6), strlcpy(dest, NULL, 5), strlcpy(dest, "", 4, strlcpy(dest, "Bonjour", 30));
//	printf("Norm : %zu (%s),%zu (%s), %zu (%s),%zu (%s)", ft_strlcpy(dest, "Bonjour", 6), dest, ft_strlcpy(dest, "BONJO", 5), dest, ft_strlcpy(dest, "", 4), dest, ft_strlcpy(dest, "Bonjour", 30), dest);

	printf("FT_STRLCAT\n"); // a faire

	printf("FT_STRNCMP\n");
       printf("Norm : %d,%d,%d,%d, %d\n", strncmp("Bonjour", "Bonjour", 20), strncmp("Bonjour", "Bonj", 20), strncmp("Bonjour", "", 20), strncmp("Bonjour", "Bonl", 3), strncmp("Bol", "Bonjour", 3));	
       printf("Mine : %d,%d,%d,%d, %d\n", ft_strncmp("Bonjour", "Bonjour", 20), ft_strncmp("Bonjour", "Bonj", 20), ft_strncmp("Bonjour", "", 20), ft_strncmp("Bonjour", "Bonl", 3), ft_strncmp("Bol", "Bonjour", 3));	

	printf("FT_STRNSTR\n"); // a faire
	
	return (0);
}
