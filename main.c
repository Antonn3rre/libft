#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

#include "libft.h"

int	main(int argc, char *argv[])
{
	(void) argc;

	printf("%d\n", ft_strncmp(argv[1], argv[2], 4));
	printf("%d\n", strncmp(argv[1], argv[2], 4));

	return 0;
}
