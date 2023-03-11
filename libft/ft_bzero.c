/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:33:06 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 13:17:49 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int taha[5] = {10, 5, 10, 20, 10};
    ft_bzero(&taha, 16);
    printf("%d %d %d %d" ,taha[0], taha[1], taha[2], taha[3]);
}
*/
