/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:46:16 by ltheveni          #+#    #+#             */
/*   Updated: 2024/11/13 17:09:30 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_put_var(char c, va_list *args)
{
	int		i;
	char	*str;

	i = 0;
	if (c == 'c')
		i = ft_putchar((char)va_arg(*args, int));
	if (c == 's')
		i = ft_putstr(va_arg(*args, char *));
	if (c == 'p')
		i = ft_putstr((void *)va_arg(*args, void *));
	if (c == 'd' || c == 'i')
	{
		str = ft_itoa(va_arg(*args, int));
		i = ft_putstr(str);
		free(str);
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
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, s);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			while (s[i] != '\0' && !ft_isalnum(s[i]) && s[i] != '%')
				i++;
			count += ft_put_var(s[i], &args);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}
