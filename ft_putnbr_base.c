/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:01:54 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/15 17:22:26 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(unsigned long long nbr, char *base, int base_int)
{
	int	res;

	res = 0;
	if (nbr > (unsigned long long)base_int)
		res = res + ft_putnbr_base(nbr / base_int, base, base_int);
	ft_printf_putchar(base[nbr % base_int]);
	return (res + 1);
}
