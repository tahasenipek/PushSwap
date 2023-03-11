/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:14:25 by msenipek          #+#    #+#             */
/*   Updated: 2022/03/03 15:49:32 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*r;
	int		tmp;
	int		a;

	a = 1;
	tmp = n;
	while (tmp && a++)
		tmp /= 10;
	r = (char *)malloc(sizeof(char) * ((n < 0) + a + (n == 0)));
	if (!r)
	r += (n < 0) + a - 1 + (n == 0);
	*r = '\0';
	if (n == 0)
		*(--r) = '0';
	a = (n >= 0) * 2 - 1;
	while (n)
	{
		*(--r) = (n % (10 * a)) * a + '0';
		n /= 10;
	}
	if (a < 0)
		*(--r) = '-';
	return (r);
}
/* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a;
	a = 123;
	printf("%s",ft_itoa(a));
} */
