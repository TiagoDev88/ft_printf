/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:58:37 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/15 16:57:04 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		ft_printf_putstr("-2147483648");
	else
	{
		if (nbr < 0)
		{
			ft_printf_putchar('-');
			nbr = -nbr;
		}
		if (nbr > 9)
			ft_putnbr(nbr / 10);
		nbr = (nbr % 10) + 48;
		ft_printf_putchar(nbr);
	}
	return (nbr);
}
