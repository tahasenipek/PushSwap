/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:40:46 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 11:53:03 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t size)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < size)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char a[]= "A";
    char b[]= "a";
    int ret;
    ret = ft_memcmp(a, b, 1);

    if(ret<0)
        printf("b < a ");
    else if(ret > 0 )
        printf (" b > a");
    else
        printf(" a = b");
    return (0);
}*/
