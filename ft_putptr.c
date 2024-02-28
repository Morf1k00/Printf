/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:21:04 by rkrechun          #+#    #+#             */
/*   Updated: 2023/12/05 16:46:25 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex(size_t n)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789abcdef";
	if (n >= 0 && n < 16)
		count += ft_putchar(symbols[n]);
	else
	{
		count += ft_hex(n / 16);
		count += ft_hex(n % 16);
	}
	return (count);
}

int	ft_putptr(size_t *ptr)
{
	int		count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_hex((size_t)ptr);
	return (count);
}

// int main()
// {
//     char *str = "Hello, World!";
//     ft_putptr(str);
// 	printf("\n%p", str);
//     return 0;
// }
