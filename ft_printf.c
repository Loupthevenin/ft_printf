#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int		ft_printf(const char *s, ...);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	p;

	// commencer par un count args qui permet d'avoir l'info direct
	while (*s)
	{
		if (*s != '%')
			ft_putchar(*s);
		else
		{
			s++;
			if (*s == 's')
			{
				va_start(p, s);
				ft_putstr(va_arg(p, char *));
				va_end(p);
			}
		}
		s++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	a;

	a = 1000;
	(void)argc;
	(void)argv;
	ft_printf("Hello\n");
	printf("%.2d", a);
	return (0);
}
