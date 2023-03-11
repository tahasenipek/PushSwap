/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:23:31 by msenipek          #+#    #+#             */
/*   Updated: 2022/09/05 14:06:06 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_way
{
	int		charcount;
	int		*aints;
	int		*bints;
	int		bind;
	int		nostring;
	int		linecount;
	char	*alline;
	char	**temppoi;
	int		aind;
	int		lowestindex;
	int		lowestnum;
	int		*oaints;
	int		ailen;
	int		biggestindex_b;
	int		biggestnum_b;
	int		biggestindex_a;
	int		biggestnum_a;
	int		newaverage;
	int		bit;
	int		setcount;
	int		set;
	int		pscount;
	int		zeros;
}	t_way;

//main func
int		ft_maindev(t_way *way, char **av);
void	ft_thecase(t_way *way);
int		main(int ac, char **av);
// maindev control function
void	ft_avcont(char **av, t_way *way);
void	cont_digit(char **av, int i, int c, t_way *way);
int		wrongchar(int c);
void	ft_contandput(t_way *way, char **av);
void	negplscont(char **av, t_way *way, int i, int c);
// maindev2 control function
void	strcont(t_way *way);
void	writeforsplit(t_way *way, char **av);
void	ft_gosplit(t_way *way);
void	ft_putintsa(t_way *way);
int		ft_changeratoi(const char *str, t_way *way);
// maindev3 control function
void	rescont(long long res, t_way *way);
void	free_splt(t_way *way);
void	ft_samecheck(t_way *way);
void	ft_samefreefunc(t_way *way);
//thecase
void	secondfree(t_way *way);
void	toconvertindex(t_way *way);
int		mostlow(t_way *way);
int		mostbigia(t_way *way);
int		sortedlist(int *aints, int len);
//sorting command
void	sa_func(t_way *way);
void	ra_func(t_way *way);
void	rra_func(t_way *way);
void	pb_func(t_way *way);
void	pa_func(t_way *way);
//less than seven
void	lowestgoesup(t_way *way);
void	rb_func(t_way *way);
void	ft_lessthanseven(t_way *way);
void	leaststep(t_way *way);
void	rrb_func(t_way *way);
// seventomore
void	seventomoresort(t_way *way);
void	calaverage(t_way *way);
int		mostbiginb(t_way *way);
void	puttob(t_way *way);
void	gotobacka(t_way *way);
// Radix sorting
void	bitsorting(t_way *way);
int		bigbit(t_way *way);
void	radix(t_way *way);

#endif