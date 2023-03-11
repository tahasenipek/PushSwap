/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:47:17 by msenipek          #+#    #+#             */
/*   Updated: 2022/04/13 18:30:07 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	control(char type, va_list list);
int	ft_printf(const char *str, ...);
int	fputchar(char c);
int	fputstr(char *a);
int	fputnbr(long n);
int	fhexa(unsigned long int nb, char flag);

#endif
