#include "libft.h"
#include <stdio.h>

int main()
{
	printf("FT_PUTCHAR_FD\n");
	printf("Norm : ");
	putchar('c');
	putchar('?');
	putchar('\n');
	printf("Mine : ");
	ft_putchar_fd('c', 1);
	ft_putchar_fd('?', 1);
	ft_putchar_fd('\n', 1);

	return (0);
}

