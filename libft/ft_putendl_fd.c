/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:09:41 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 08:10:19 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd (s, fd);
	write (fd, "\n", 1);
}
/*
int main()
{
    int fd =open("deneme2.txt", O_CREAT | O_RDWR, 0777);
    ft_putendl_fd("aga",1);
}
*/
