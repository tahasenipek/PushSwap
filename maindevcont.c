/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maindevcont.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:21:33 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 17:29:59 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	negplscont(char **av, t_way *way, int i, int c)
{
	if (c != 0)
	{
		if (av[i][c - 1] != ' ')
		{
			ft_printf("Error\nWrong input\n");
			free(way->alline);
			free(way);
			exit(1);
		}
	}
	if (av[i][c + 1] > '9' || av[i][c + 1] < '0')
	{
		ft_printf("Error\nWrong input\n");
		free(way->alline);
		free(way);
		exit(1);
	}
}

void	ft_contandput(t_way *way, char **av)
{
	int	i;
	int	c;

	i = 1;
	while (av[i])
	{
		c = 0;
		while (av[i][c])
		{
			if (av[i][c] >= '0' && av[i][c] <= '9')
				way->nostring = 1;
			if (av[i][c] == '+' || av[i][c] == '-')
				negplscont(av, way, i, c);
			c++;
		}
		strcont(way);
		way->nostring = 0;
		i++;
	}
	writeforsplit(way, av);
}

int	wrongchar(int c)
{
	if ((c >= 48 && c <= 57) || c == '-' || c == '+')
		return (1);
	if (c == ' ')
		return (2);
	return (0);
}

void	cont_digit(char **av, int i, int c, t_way *way)
{
	if (wrongchar(av[i][c]) == 0)
	{
		ft_printf("Error\nWrongchar\n");
		free(way);
		exit(1);
	}
}

void	ft_avcont(char **av, t_way *way)
{
	int	i;
	int	c;

	i = 1;
	while (av[i])
	{
		c = 0;
		while (av[i][c])
		{
			while (av[i][c] && av[i][c] != ' ')
			{
				cont_digit(av, i, c, way);
				c++;
				way->charcount++;
			}
			while (av[i][c] == ' ')
				c++;
			if (av[i][c] != '\0')
				way->charcount++;
		}
		if (av[i++ + 1] != NULL)
			way->charcount++;
	}
}
