/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:46:19 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/15 17:26:10 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_format(char str, va_list args)
{
	int	i;

	i = 0;

		if (str == '%')
			ft_printf_putchar('%');
		else if (str == 'c')
			i = i + ft_printf_putchar(va_arg(args, int));
		else if (str == 's')
			i = i + ft_printf_putstr(va_arg(args, char *));
		else if (str == 'd' || str == 'i')
			i = i + ft_putnbr(va_arg(args, int));
		else if (str == 'p')
		{
			ft_printf_putstr("0x");	
			i = i + ft_putnbr_base(va_arg(args, unsigned long long), "0123456789abcdef", 16);
		}
		else if (str == 'u')
			i = i + ft_putnbr_unsigned(va_arg(args, unsigned int));
		else if (str == 'x')
			
	return (i);
}
int	ft_printf(const char *str, ...)
{
	int	i;
	int	total;
	va_list	args;

	va_start(args,str);

	i = 0;
	total = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			total = total + ft_check_format(str[i], args);
		}
		else
			total = total + ft_printf_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (total);
}
#include <stdio.h>
int main(void)
{
	char testechar = 'N';
	char *chr = "meu";
	int num = -214748360;
	unsigned int unsignum = 10;
	ft_printf("%c %s %% %d %p %u\n", testechar, chr, num, &chr, unsignum);
	printf("%c %s %% %d %p %u\n", testechar, chr, num, &chr, unsignum);
	int a = 5;
    int *p = &a;
    printf("%d, %u, %p\n", p, p, p);
	ft_printf("%d, %u, %p\n", p, p, p);

	return (0);
}
