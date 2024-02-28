/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:44:10 by rkrechun          #+#    #+#             */
/*   Updated: 2023/12/06 12:41:57 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>//for file I/O (read, write, open, close). Also for size_t.
# include <stdarg.h>//for va_list structures.
# include <stdlib.h>//for size_t in putptr
# include <stdio.h>// for printf. if you need something check in main.c . 

int	ft_printf(const char *s, ...); // Main function
int	ft_putchar(char c); // print character (%c)
int	ft_putstr(char *str); //print string (%s)
int	ft_putnbr(int n); //print digets and integers (%d and %i)
int	ft_putptr(size_t *ptr); //print pointer adress (%p)
int	ft_putxlower(unsigned int n); //print hexidecimals with small letters(%x)
int	ft_putxupper(unsigned int n); //print hexidecimals with big letters(%X)
int	ft_putunsignednbr(unsigned int n); //print positive numbers (%u)

#endif
