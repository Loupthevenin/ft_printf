#include "includes/ft_printf.h"

int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	*d;

	a = "Hello";
	b = "world";
	c = "world";
	d = "world";
	/* ft_printf("Hello\t"); */
	/* printf("Hello\n"); */
	ft_printf("%sworld\t", a);
	printf("%sworld\n", a);
	ft_printf("%s %s\t", a, b);
	printf("%s %s\n", a, b);
	ft_printf("%s %s %s %s\t", a, b, c, d);
	printf("%s %s %s %s\n", a, b, c, d);
	ft_printf("%s%s%s%s\t", a, b, c, d);
	printf("%s%s%s%s\n", a, b, c, d);
	printf("\n\n");
	ft_printf("aabab%%aaabb\t");
	printf("aabab%%aaabb\n");
	ft_printf("%-%a\t");
	printf("%-%\n");
	return (0);
}
