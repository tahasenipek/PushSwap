/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:33:46 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 12:15:02 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	boyut;

	if (!s1 || !s2)
		return (NULL);
	boyut = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = malloc(sizeof(char) * boyut);
	i = -1;
	j = -1;
	if (!str)
	{
		return (NULL);
	}
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
			str[i++] = s2[j];
	str [i] = '\0';
	return (str);
}
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s1[] = "aaa";
    char s2[] = "bbb";
    printf("Join str is %s..",ft_strjoin(s1, s2));
}
*/
