/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:10:05 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/16 16:20:08 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
			dst[c] = src[d];
			c++;
			d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char dst[] = "badfg";
    char src[] = "geasdasd";
    
    printf ("son çıktı %zu..\n", ft_strlcat(dst, src, 4));
    printf ("Dst son hali %s\n", dst);
    printf ("src son hali %s\n", src);

    return (0);
}
*/
