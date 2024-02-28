/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:33:08 by rkrechun          #+#    #+#             */
/*   Updated: 2023/12/05 16:47:15 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr(unsigned int n)
{
	int		count;

	count = 0;
	if (n == 4294967295)
	{
		count += write(1, "4", 1);
		n = 294967295;
	}
	if (n < 10)
		count += ft_putchar('0' + n);
	if (n > 9)
	{
		count += ft_putunsignednbr(n / 10);
		count += ft_putunsignednbr(n % 10);
	}
	return (count);
}
