/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seventomore.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:51:34 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 11:58:09 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	gotobacka(t_way *way)
{
	int	i;

	mostbiginb(way);
	while (way->bind > 0)
	{
		mostbiginb(way);
		i = way->biggestindex_b;
		if (i < (way->bind) / 2)
		{
			while (i-- >= 0)
				rrb_func(way);
			pa_func(way);
		}
		else
		{
			while (i++ != way->bind - 1)
				rb_func(way);
			pa_func(way);
		}
	}
}

int	mostbiginb(t_way *way)
{
	int	i;
	int	x;
	int	c;

	c = 1;
	i = 1;
	x = way->bind - 1;
	while (i <= way->bind - 1)
	{	
		if (way->bints[x] < way->bints[way->bind - 1 - i])
		{
			x = x - c;
			c = 0;
		}
		c++;
		i++;
	}
	way->biggestindex_b = x;
	way->biggestnum_b = way->bints[x];
	return (way->biggestindex_b);
}

void	calaverage(t_way *way)
{
	int	total;
	int	i;

	total = 0;
	i = way->ailen;
	while (i >= 0)
	{
		total = total + way->aints[i];
		i--;
	}
	way->newaverage = total / (way->ailen + 1);
}

void	puttob(t_way *way)
{
	int	i;

	while (way->ailen > 1)
	{
		calaverage(way);
		i = way->ailen;
		while (i >= 0 && way->ailen > 1)
		{
			if (way->aints[way->ailen] < way->newaverage)
				pb_func(way);
			else if (way->aints[way->ailen] >= way->newaverage)
				ra_func(way);
			i--;
		}
	}
	if (way->ailen == 1)
	{
		if (way->aints[1] > way->aints[0])
			sa_func(way);
	}
}

void	seventomoresort(t_way *way)
{
	puttob(way);
	gotobacka(way);
}
