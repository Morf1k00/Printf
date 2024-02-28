/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxlower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:52:55 by rkrechun          #+#    #+#             */
/*   Updated: 2023/12/05 17:12:11 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putxlower(unsigned int n)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789abcdef";
	if (n >= 0 && n < 16)
		count += ft_putchar(symbols[n]);
	else
	{
		count += ft_putxlower(n / 16);
		count += ft_putxlower(n % 16);
	}
	return (count);
}
