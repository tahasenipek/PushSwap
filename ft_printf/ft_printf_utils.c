/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:59:06 by msenipek          #+#    #+#             */
/*   Updated: 2022/04/13 18:32:35 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fputchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	fputstr(char *a)
{
	int	len;

	len = 0;
	if (!a)
		a = "(null)";
	while (a[len])
		write (1, &a[len++], 1);
	return (len);
}

int	fputnbr(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		len += fputnbr(n / 10);
		len += fputnbr(n % 10);
	}
	else if (n < 10)
		len += fputchar(n + 48);
	return (len);
}

int	fhexa(unsigned long int nb, char flag)
{
	const char	lowerbase[] = "0123456789abcdef";
	const char	upperbase[] = "0123456789ABCDEF";
	int			len;

	len = 0;
	if (nb >= 16)
	{
		len += fhexa(nb / 16, flag);
		len += fhexa(nb % 16, flag);
	}
	else if (nb < 16 && flag == 'x')
		len += write (1, &lowerbase[nb % 16], 1);
	else if (nb < 16 && flag == 'X')
		len += write (1, &upperbase[nb % 16], 1);
	return (len);
}
