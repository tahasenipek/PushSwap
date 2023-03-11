/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:33:22 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 12:23:52 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (s[i] == (char)c)
			return ((char *)(s + i));
	return (NULL);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
    const char s[]="dolasmak";
    char c;
    c = 's';
    printf("Çıkıtnız %s...", ft_strrchr(s, c));

    return (0);
}
 */
