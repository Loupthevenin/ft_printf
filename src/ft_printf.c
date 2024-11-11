#include "../includes/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	p;

	// commencer par un count args qui permet d'avoir l'info direct
	while (*s)
	{
		if (*s != '%')
			ft_putchar_fd(*s, 1);
		else
		{
			s++;
			if (*s == 's')
			{
				va_start(p, s);
				ft_putstr_fd(va_arg(p, char *), 1);
				va_end(p);
			}
		}
		s++;
	}
	return (1);
}
