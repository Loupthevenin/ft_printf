#include "includes/ft_printf.h"

int	main(int argc, char *argv[])
{
	int	a;

	a = 1000;
	(void)argc;
	(void)argv;
	ft_printf("Hello\n");
	printf("%2d", a);
	return (0);
}
