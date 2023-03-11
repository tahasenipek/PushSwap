/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maindevcont3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:35:52 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 17:41:56 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_samefreefunc(t_way *way)
{
	way->zeros = 0;
	ft_printf("Error\nSame count\n");
	exit(1);
}

void	ft_samecheck(t_way *way)
{
	int	i;
	int	c;
	int	temp;
	int	st;

	st = 0;
	temp = way->aind - 1;
	c = 1;
	i = 0;
	while (st < way->aind - 1)
	{
		if (way->aints[i] == way->aints[c])
			ft_samefreefunc(way);
		c++;
		temp--;
		if (temp == 0)
		{
			i++;
			temp = way->aind - i - 1;
			c -= temp;
			st++;
		}
	}
	ft_thecase(way);
}

void	free_splt(t_way *way)
{
	int	i;

	i = 0;
	while (way->temppoi[i])
	{
		free(way->temppoi[i]);
		i++;
	}
	free(way->temppoi);
}

void	rescont(long long res, t_way *way)
{
	if (res > 2147483647)
	{
		ft_printf("Error\nIt was entered that a larger value than max integer.");
		free(way->aints);
		exit(1);
	}
	if (res < -2147483648)
	{
		ft_printf("Error\nIt was entered that a less value than min integer.");
		free(way->aints);
		exit(1);
	}
}
