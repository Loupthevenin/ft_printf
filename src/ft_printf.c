#include "../includes/ft_printf.h"

void	ft_put_var(char c, va_list *args)
{
	if (c == 'c')
		ft_putchar_fd((char)va_arg(*args, int), 1);
	if (c == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	if (c == 'p')
	{
	}
	if (c == 'd')
		ft_putnbr_fd(va_arg(*args, int), 1);
	if (c == 'i')
	{
	}
	if (c == 'u')
	{
	}
	if (c == 'x')
	{
	}
	if (c == 'X')
	{
	}
	if (c == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;

	va_start(args, s);
	while (*s)
	{
		if (*s != '%')
			ft_putchar_fd(*s, 1);
		if (*s == '%')
		{
			while (*s && !ft_isalnum(*s))
				s++;
			ft_put_var(*s, &args);
		}
		s++;
	}
	va_end(args);
	return (0);
}
