/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:54:37 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 12:11:24 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void f(unsigned int i,char *c)
{
    *c += 1;
    
}
int main()
{
    char a[]="taha";
    ft_striteri(a, f);
    printf("%s", a);
}
*/
