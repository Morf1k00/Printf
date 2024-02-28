/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:44:06 by rkrechun          #+#    #+#             */
/*   Updated: 2023/12/05 16:52:31 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (type == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	else if (type == 'd')
		return (ft_putnbr(va_arg(ap, int)));
	else if (type == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (type == 'u')
		return (ft_putunsignednbr(va_arg(ap, unsigned int)));
	else if (type == 'x')
		return (ft_putxlower(va_arg(ap, int)));
	else if (type == 'X')
		return (ft_putxupper(va_arg(ap, int)));
	else if (type == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;
	int		symbols;

	count = 0;
	symbols = 0;
	va_start(ap, s);
	while (s[count])
	{
		if (s[count] == '%')
			symbols += ft_format(ap, s[++count]);
		else
			symbols += ft_putchar(s[count]);
		count++;
	}
	va_end(ap);
	return (symbols);
}
