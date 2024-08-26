#include "libft.h"

static void	ft_putchar(int n, int fd)
{
	char num = n + '0';
	write(fd, &num, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar(n, fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	ft_putchar(n % 10, fd);

}
