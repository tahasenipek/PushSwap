/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:22:01 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 17:35:26 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_maindev(t_way *way, char **av)
{
	ft_avcont(av, way);
	way->alline = ft_calloc(sizeof(char), way->charcount + 1);
	if (!way->alline)
	{
		free(way);
		exit(1);
	}
	ft_contandput(way, av);
	way->bints = ft_calloc(sizeof(int), way->aind);
	if (!way->bints)
	{
		free(way->aints);
		free(way->alline);
		free(way);
		exit(1);
	}
	return (1);
}

void	ft_thecase(t_way *way)
{
	toconvertindex(way);
	mostlow(way);
	mostbigia(way);
	if (sortedlist(way->aints, way->aind) == 0)
	{
		if (way->aind == 2 && way->aints[1] < way->aints[0])
			sa_func(way);
		else if (way->aind <= 7)
		{
			ft_lessthanseven(way);
		}
		else if (7 < way->aind && way->aind <= 161)
		{
			seventomoresort(way);
		}
		else if (way->aind > 161)
		{
			radix(way);
		}
	}
	else
		exit(1);
}

int	main(int ac, char **av)
{
	t_way	*way;

	if (ac == 1)
		exit(1);
	way = ft_calloc(sizeof(t_way), 1);
	if (!way)
		exit(1);
	if (ft_maindev(way, av) == 0)
	{
		free(way->aints);
		free(way);
		exit(1);
	}
	ft_samecheck(way);
}
