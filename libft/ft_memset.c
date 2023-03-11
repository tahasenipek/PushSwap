/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:28:36 by msenipek          #+#    #+#             */
/*   Updated: 2022/03/03 17:15:12 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *) b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "tahasenipek";
    ft_memset(str,'a', 4);
    printf("%s",ft_memset(str,'a', 4));
}
*/
