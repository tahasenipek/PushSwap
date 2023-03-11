/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:48:00 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/20 17:15:54 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char dst[] = "Burda";
    char src[] = "bitti";
    
    printf("dst %s \n", dst);
    printf("src %s \n", src);
    printf("çıktınız %zu..\n", ft_strlcpy(dst, src, 3));
    printf("dst %s \n", dst);
    printf("src %s \n", src);
}
*/
