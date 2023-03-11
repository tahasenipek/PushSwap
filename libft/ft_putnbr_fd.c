/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:14:50 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/18 08:15:11 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n2;

	n2 = n;
	if (n2 < 0)
	{
		n2 = (n2 * -1);
		write(fd, "-", 1);
	}
	if (n2 > 9)
	{
		ft_putnbr_fd (n2 / 10, fd);
		ft_putchar_fd ((n2 % 10) + '0', fd);
	}
	else
		ft_putchar_fd (n2 + '0', fd);
}
