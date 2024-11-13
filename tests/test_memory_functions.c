#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char	s1[11];
	char	s2[11];
	char	s3[11];
	char	s4[11];

	printf("FT_MEMSET\n");
	printf("Norm : %s\n", (char *)memset((void *)s1, 'a', 10));
	printf("Mine : %s\n", (char *)ft_memset((void *)s2, 'a', 10));
	printf("Norm : %s\n", (char *)memset((void *)s1, 'd', (0)));
	printf("Mine : %s\n", (char *)ft_memset((void *)s2, 'd', (0)));

	printf("FT_BZERO\n");
	bzero((void *)(s1 + 3), 12);
	printf("Norm : %s\n", s1);
	ft_bzero((void *)(s2 + 3), 12);
	printf("Mine : %s\n", s2);

	strcpy(s2, "Bonjour ca");
	printf("FT_MEMCPY\n");
	memcpy(s3, s2, 11);
	printf("Norm : %s et %s\n", s2, s3);
	ft_memcpy(s4, s2, 11);
	printf("Mine : %s et %s\n", s2, s4);
	
	printf("FT_MEMCMP\n");
	printf("%d, %d, %d\n", memcmp(s1, s2, 20), memcmp(s1, s2, 3), memcmp(s1, s2, 0));
	printf("%d, %d, %d\n", ft_memcmp(s1, s2, 20), ft_memcmp(s1, s2, 3), ft_memcmp(s1, s2, 0));

/*	strcpy(s2, "Oui non pe");
	strcpy(s3, "Oui non pe");
	printf("FT_MEMCPY\n");
	memmove(s2 + 2, s2, 6);
	printf("Norm : %s\n", s2);
	ft_memcpy(s3 + 2, s3, 6);
	printf("Mine : %s\n", s3);
*/
	return (0);
}
