/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:01:54 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/17 11:30:25 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief Prints an unsigned long number in a given base.
 * 
 * @param nbr The number to be converted and printed.
 * @param base The base to convert the number into (e.g., "0123456789abcdef").
 * @return int The number of characters printed.
 */
int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int		count;
	size_t	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	count = 0;
	if (nbr >= base_len)
		count = count + ft_putnbr_base(nbr / base_len, base);
	count = count + ft_printf_putchar(base[nbr % base_len]);
	return (count);
}
