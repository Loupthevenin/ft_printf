/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:04:14 by ltheveni          #+#    #+#             */
/*   Updated: 2024/11/13 20:08:52 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar(char const c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_u(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}

/* int	ft_putptr(void *p) */
/* { */
/* 	uintptr_t	addr; */
/* 	int			i; */
/**/
/* 	addr = (uintptr_t)p; */
/* 	write(1, "0x", 2); */
/* 	while (i < 8) { */
/**/
/* 		i++; */
/* 	} */
/* 	return (1); */
/* } */
