/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:59:13 by ltheveni          #+#    #+#             */
/*   Updated: 2024/11/14 11:15:47 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf_h
# define ft_printf_h

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char const c);
int	ft_putstr(char const *s);
int	ft_putnbr_u(unsigned int n);
int	ft_puthex(unsigned long n, int is_upper);
int	ft_putptr(void *p);
int	ft_printf(const char *s, ...);

#endif
