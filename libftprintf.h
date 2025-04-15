/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:43:53 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/15 17:24:00 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

#define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *, ...);
int	ft_printf_putstr(char *str);
int	ft_printf_putchar(char c);
int	ft_putnbr_base(unsigned long long nbr, char *base, int base_int);
int	ft_putnbr(int nbr);
int	ft_putnbr_unsigned(unsigned int nbr);
int	ft_check_format(char str, va_list args);


#endif