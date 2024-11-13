/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:59:13 by ltheveni          #+#    #+#             */
/*   Updated: 2024/11/13 17:00:52 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char const c);
int	ft_putstr(char const *s);
// int	ft_putptr(void *p);
int	ft_printf(const char *s, ...);

#endif
