/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:35:30 by msenipek          #+#    #+#             */
/*   Updated: 2022/02/16 15:58:51 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
}
/*
#include <stdio.h>
int main()
{
  char str1[]="ASDASD";
  char str2[]="ASDasda";
  int ret;
  ret = ft_strncmp(str1, str2, 7);
  {
      
  if(ret<0)
      printf("str1 is less than str2");
  else if ( ret > 0)
      printf("str2 is less than str1");
  else
      printf("Str1 is  equal to str2");
   }
   return 0;
}
*/
