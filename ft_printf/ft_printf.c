/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:59:26 by msenipek          #+#    #+#             */
/*   Updated: 2022/04/13 18:29:13 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	control(char type, va_list list)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += fputchar(va_arg(list, int));
	else if (type == 's')
		len += fputstr(va_arg(list, char *));
	else if (type == 'd' || type == 'i')
		len += fputnbr(va_arg(list, int));
	else if (type == 'u')
		len += fputnbr(va_arg(list, unsigned));
	else if (type == 'x')
		len += fhexa(va_arg(list, unsigned), type);
	else if (type == 'X')
		len += fhexa(va_arg(list, unsigned), type);
	else if (type == 'p')
	{
		len += write(1, "0x", 2);
		len += fhexa(va_arg(list, unsigned long int), 'x');
	}
	else if (type == '%')
		len += fputchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start (list, str);
	while (str[i])
	{
		if (str[i] != '%')
			len += write(1, &str[i++], 1);
		else if (str[i] == '%')
		{	
			len += control(str[++i], list);
			i++;
		}
	}
	va_end (list);
	return (len);
}
/*
int main()
{
    ft_printf("bunu yazdır %d", -123);
    printf("bunu yazdır %d", -123);
}
*/
