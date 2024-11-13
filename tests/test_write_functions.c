#include "libft.h"
#include <stdio.h>

int main()
{
/*	printf("FT_PUTCHAR_FD\n");
	printf("Norm : ");
	putchar('c');
	putchar('?');
	putchar('\n');
	printf("Mine : ");
	ft_putchar_fd('c', 1);
	ft_putchar_fd('?', 1);
	ft_putchar_fd('\n', 1);
*/
	printf("FT_PUTNBR_FD\n");
	printf("Expe : 0 -2147483648 2147483647 235 -42\n");
	write(1, "Mine : ", 7);
	ft_putnbr_fd(0, 1);
	write(1, " ", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, " ", 1);
       	ft_putnbr_fd(2147483647, 1);
	write(1, " ", 1);
	ft_putnbr_fd(235, 1);
	write(1, " ", 1);
	ft_putnbr_fd(-42, 1);
	write(1, "\n", 1);
	return (0);
}

