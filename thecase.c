/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thecase.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:42:43 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 15:05:55 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sortedlist(int *aints, int len)
{
	int	i;

	i = len - 1;
	while (i--)
	{
		if (aints[i + 1] > aints[i])
			return (0);
	}
	return (1);
}

int	mostlow(t_way *way)
{
	int	i;
	int	x;
	int	c;

	i = 1;
	c = 1;
	x = way->ailen;
	while (i <= way->ailen)
	{
		if (way->aints[x] > way->aints[way->ailen - i])
		{
			x = x - c;
			c = 0;
		}
		c++;
		i++;
	}
	way->lowestindex = x;
	way->lowestnum = way->aints[x];
	return (way->lowestindex);
}

int	mostbigia(t_way *way)
{
	int	i;
	int	x;
	int	count;

	count = 1;
	i = 1;
	x = way->ailen;
	while (i <= way->ailen)
	{
		if (way->aints[x] < way->aints[way->ailen - i])
		{
			x = x - count;
			count = 0;
		}
		count++;
		i++;
	}
	way->biggestindex_a = x;
	way->biggestnum_a = way->aints[x];
	return (way->biggestindex_a);
}

void	secondfree(t_way *way)
{
	free(way->aints);
	free(way->bints);
	free(way);
	exit(1);
}

void	toconvertindex(t_way *way)
{
	int		i;
	int		m;
	int		num;

	way->oaints = ft_calloc(sizeof(int), way->aind);
	if (!(way->oaints))
		secondfree(way);
	num = 0;
	while (num < way->aind)
	{
		i = 0;
		m = 0;
		while (m < way->aind)
		{
			if (way->aints[num] > way->aints[m])
				i++;
			m++;
		}
		way->oaints[num] = i;
		num++;
	}
	free (way->aints);
	way->aints = way->oaints;
}
