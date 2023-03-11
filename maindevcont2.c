/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maindevcont2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:30:20 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 14:00:35 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strcont(t_way *way)
{
	if (way->nostring == 0)
	{
		ft_printf("Error\nNo string\n");
		free(way->alline);
		free(way);
		exit(1);
	}
}

int	ft_changeratoi(const char *str, t_way *way)
{
	int			i;
	int			s;
	long long	res;

	i = 0;
	s = 1;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	res = res * s;
	rescont(res, way);
	return (res);
}

void	ft_putintsa(t_way *way)
{
	int	i;
	int	temp;
	int	c;

	i = 0;
	c = way->aind - 1;
	while (way->temppoi[i])
	{
		temp = ft_changeratoi(way->temppoi[i], way);
		way->aints[c] = temp;
		i++;
		c--;
	}
	free_splt(way);
}

void	ft_gosplit(t_way *way)
{
	int	i;

	i = 0;
	way->temppoi = ft_split(way->alline, ' ');
	if (!way->temppoi)
	{
		write (1, "Error\n", 6);
		free(way->alline);
		free(way);
		exit(1);
	}
	while (way->temppoi[i])
		i++;
	way->aind = i;
	way->ailen = i - 1;
	way->aints = ft_calloc(sizeof(int), way->aind);
	if (!way->aints)
	{
		free_splt(way);
		free(way->aints);
		free(way->alline);
		free(way);
		exit(1);
	}
	ft_putintsa(way);
}

void	writeforsplit(t_way *way, char **av)
{
	int	i;
	int	c;
	int	count;

	i = 1;
	count = 0;
	while (av[i])
	{
		c = 0;
		while (av[i][c])
		{
			while (av[i][c] == ' ')
				c++;
			while (av[i][c] && av[i][c] != ' ')
				way->alline[count++] = av[i][c++];
			if (av[i][c] != '\0')
				way->alline[count++] = ' ';
		}
		if (av[i++ + 1] != NULL)
			way->alline[count++] = ' ';
	}
	way->alline[count] = '\0';
	ft_gosplit(way);
}
