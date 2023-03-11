/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:47:36 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 15:11:59 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *) src;
	b = (char *) dst;
	if (a < b)
		while (len--)
			b[len] = a[len];
	else
		ft_memcpy(b, a, len);
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[]= "ILE";
    char *s = ft_memmove(str+4, str, 4);
    
    printf("memmove=%s\n", s);
}
*/
