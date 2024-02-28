/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:52:53 by rkrechun          #+#    #+#             */
/*   Updated: 2023/12/05 15:55:14 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putxupper(unsigned int n)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (n >= 0 && n < 16)
		count += ft_putchar(symbols[n]);
	else
	{
		count += ft_putxupper(n / 16);
		count += ft_putxupper(n % 16);
	}
	return (count);
}

// int main()
// {
//     unsigned int number = 462;
//     int printedChars = ft_putxupper(number);
//     printf("\n%d\n", printedChars);
// 	printf("%X", 462);
//     return 0;
// }
