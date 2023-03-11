/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:48:29 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 12:20:18 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rst;
	unsigned int	i;

	if (!s)
		return (NULL);
	rst = (char *)(malloc(ft_strlen(s) + 1));
	if (!rst)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		rst[i] = f(i, s[i]);
		i++;
	}
	rst[i] = '\0';
	return (rst);
}
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char f(unsigned int i, char c)
{
    char str;
    str = c + 1;
    return (str);
}

int main()
{
    char str1[] = "abc";
    char *str2;
    str2 = ft_strmapi(str1, *f);
    printf("%s\n", str2);
}
*/
