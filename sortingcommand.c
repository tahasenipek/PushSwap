/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingcommand.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:52:42 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 12:10:11 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_func(t_way *way)
{
	if (way->bind != 0)
	{
		way->aints[way->ailen + 1] = way->bints[way->bind - 1];
		--way->bind;
		++way->ailen;
		ft_printf("pa\n");
	}
}

void	pb_func(t_way *way)
{
	if (way->ailen != -1)
	{
		way->bints[way->bind] = way->aints[way->ailen];
		--way->ailen;
		++way->bind;
	}
	ft_printf("pb\n");
}

void	sa_func(t_way *way)
{
	int	i;

	i = 0;
	if (way->ailen >= 1)
	{
		i = way->aints[way->ailen - 1];
		way->aints[way->ailen - 1] = way->aints[way->ailen];
		way->aints[way->ailen] = i;
		ft_printf("sa\n");
	}
}

void	ra_func(t_way *way)
{
	int	a;
	int	last;

	a = way->ailen;
	last = way->aints[way->ailen];
	if (way->ailen >= 1)
	{
		while (a >= 1)
		{
			way->aints[a] = way->aints[a - 1];
			--a;
		}
		way->aints[a] = last;
	}
	ft_printf("ra\n");
}

void	rra_func(t_way *way)
{
	int	i;
	int	first;

	i = 0;
	first = way->aints[i];
	if (way->ailen >= 1)
	{
		while (way->ailen > i)
		{
			way->aints[i] = way->aints[i + 1];
			i++;
		}
		way->aints[i] = first;
		ft_printf("rra\n");
	}
}
