/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twothanmoresort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:05:50 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 11:49:30 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lowestgoesup(t_way *way)
{
	int	i;

	i = mostlow(way);
	if (i == way->ailen - 1)
		sa_func(way);
	else if (i < ((way->ailen + 1) / 2))
	{
		while (i >= 0)
		{
			rra_func(way);
			i--;
		}
	}
	else
	{
		while (i != way->ailen)
		{
			ra_func(way);
			i++;
		}
	}
}

void	leaststep(t_way *way)
{
	if (mostlow(way) == 0)
	{
		if (way->aints[way->ailen] > way->aints[way->ailen - 1])
		{
			ra_func(way);
			sa_func(way);
		}
		else if (way->aints[way->ailen] < way->aints[way->ailen - 1])
			rra_func(way);
	}	
	else if (mostlow(way) == 1)
	{
		if (way->aints[way->ailen] > way->aints[way->ailen - 2])
			ra_func(way);
		else if (way->aints[way->ailen] < way->aints[way->ailen - 2])
			sa_func(way);
	}
	else if (mostlow(way) == 2)
	{
		sa_func(way);
		ra_func(way);
	}
}

void	ft_lessthanseven(t_way *way)
{
	int	pbcount;

	pbcount = 0;
	while (sortedlist(way->aints, way->aind) == 0)
	{
		if (way->ailen == 2)
		{
			leaststep(way);
		}
		lowestgoesup(way);
		if (sortedlist(way->aints, way->aind) == 1)
		{
			break ;
		}
		pb_func(way);
		pbcount++;
	}
	while (pbcount > 0)
	{
		pa_func(way);
		pbcount--;
	}
}

void	rrb_func(t_way *way)
{
	int	first;
	int	i;

	i = 0;
	first = way->bints[i];
	if (way->bind > 1)
	{
		while (i < way->bind - 1)
		{
			way->bints[i] = way->bints[i + 1];
			i++;
		}
		way->bints[i] = first;
	}
	ft_printf("rrb\n");
}

void	rb_func(t_way *way)
{
	int	last;
	int	b;

	b = way->bind;
	last = way->bints[way->bind - 1];
	if (way->bind > 1)
	{
		while (b >= 1)
		{
			way->bints[b] = way->bints[b - 1];
			--b;
		}
		way->bints[b] = last;
	}
	ft_printf("rb\n");
}
