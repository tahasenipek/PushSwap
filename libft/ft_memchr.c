/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:01:54 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/17 16:24:35 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    const char str[] ="taha.senipek";
    const char ch = '.';
    char *ret;
    
    ret = ft_memchr(str, ch, ft_strlen(str));
    printf("Sonraki string %c is %s \n", ch, ret);
    return (0);
}*/
