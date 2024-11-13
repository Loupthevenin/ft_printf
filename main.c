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
	ft_printf("Hello\t");
	printf("Hello\n");
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
	ft_printf("%%\t");
	printf("%%\n");
	ft_printf("%-%\t");
	printf("%-%\n");
	printf("\n\n");
	printf("\n\n");
	ft_printf("%u\t", (unsigned int)10);
	printf("%u\n", (unsigned int)10);
	ft_printf("%u\t", (unsigned int)-1);
	printf("%u\n", (unsigned int)-1);
	return (0);
}
