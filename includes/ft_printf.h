/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:59:13 by ltheveni          #+#    #+#             */
/*   Updated: 2024/11/13 15:07:49 by ltheveni         ###   ########.fr       */
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
int	ft_printf(const char *s, ...);

#endif
