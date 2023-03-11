/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:59:17 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 16:02:41 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bitsorting(t_way *way)
{
	while (way->set != way->setcount + 1)
	{
		if ((way->aints[way->ailen] >> way->bit) & 1)
		{
			ra_func(way);
			way->pscount++;
		}
		else
		{
			pb_func(way);
			way->pscount++;
		}
		way->set++;
	}
}

int	bigbit(t_way *way)
{
	int	i;

	i = 0;
	while (way->biggestnum_a)
	{
		i++;
		way->biggestnum_a >>= 1;
	}
	return (i);
}

void	radix(t_way *way)
{
	int	count;

	way->bit = 0;
	count = bigbit(way);
	way->setcount = way->ailen;
	while (way->bit != count)
	{
		way->set = 0;
		bitsorting(way);
		while (way->ailen != way->setcount)
		{
			pa_func(way);
			way->pscount++;
		}
		way->bit++;
	}
}
