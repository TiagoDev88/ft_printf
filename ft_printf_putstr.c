/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:48:45 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/15 15:49:19 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_putstr(char *str)
{
	int	i;

	if (!str)
		ft_printf("(NULL)");
	i = 0;
	while (str[i])
	{
		ft_printf_putchar(str[i]);
		i++;
	}
	return (i);
}
