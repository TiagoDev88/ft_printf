/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:53:42 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/15 17:05:17 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	nbr = (nbr % 10) + 48;
	ft_printf_putchar(nbr);
	return (nbr);
}
