#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("FT_ISALPHA\n");
	printf("Norm : %d,%d,%d,%d,%d\n", isalpha(0), isalpha(67), isalpha(134), isalpha(-2), isalpha(104));
	printf("Mine : %d,%d,%d,%d,%d\n", ft_isalpha(0), ft_isalpha(67), ft_isalpha(134), ft_isalpha(-2), ft_isalpha(104));
	
	printf("FT_ISDIGIT\n");
	printf("Norm : %d,%d,%d,%d,%d\n", isdigit(0), isdigit(52), isdigit(134), isdigit(-2), isdigit(57));
	printf("Mine : %d,%d,%d,%d,%d\n", ft_isdigit(0), ft_isdigit(52), ft_isdigit(134), ft_isdigit(-2), ft_isdigit(57));
	
	printf("FT_ISALNUM\n");
	printf("Norm : %d,%d,%d,%d,%d,%d,%d\n", isalnum(0), isalnum(52), isalnum(134), isalnum(-2), isalnum(57), isalnum(67), isalnum(104));
	printf("Norm : %d,%d,%d,%d,%d,%d,%d\n", ft_isalnum(0), ft_isalnum(52), ft_isalnum(134), ft_isalnum(-2), ft_isalnum(57), ft_isalnum(67), ft_isalnum(104));
	
	printf("FT_ISASCII\n");
	printf("Norm : %d,%d,%d,%d,%d\n", isascii(0), isascii(52), isascii(134), isascii(-2), isascii(57));
	printf("Norm : %d,%d,%d,%d,%d\n", ft_isascii(0), ft_isascii(52), ft_isascii(134), ft_isascii(-2), ft_isascii(57));

	printf("FT_ISPRINT\n");
	printf("Norm : %d,%d,%d,%d,%d\n", isprint(0), isprint(52), isprint(32), isprint(-2), isprint(57));
	printf("Norm : %d,%d,%d,%d,%d\n", ft_isprint(0), ft_isprint(52), ft_isprint(32), ft_isprint(-2), ft_isprint(57));

	printf("FT_TOUPPER\n");
	printf("Norm : %c,%c,%c,%c,%c\n", toupper('c'), toupper('B'), toupper('9'), toupper('q'), toupper(0));
	printf("Norm : %c,%c,%c,%c,%c\n", ft_toupper('c'), ft_toupper('B'), ft_toupper('9'), ft_toupper('q'), ft_toupper(0));
	
	printf("FT_TOLOWER\n");
	printf("Norm : %c,%c,%c,%c,%c\n", tolower('c'), tolower('B'), toupper('9'), tolower('Q'), tolower(0));
	printf("Norm : %c,%c,%c,%c,%c\n", ft_tolower('c'), ft_tolower('B'), ft_toupper('9'), ft_tolower('Q'), ft_tolower(0));

	return (0);
}
