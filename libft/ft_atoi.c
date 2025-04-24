/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:13:57 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/13 16:14:26 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trint(int i1, int *myint1, const char *str1)
{
	while (str1[i1] >= '0' && str1[i1] <= '9')
	{
		*myint1 = str1[i1] - '0' + (*myint1 * 10);
		i1++;
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	t;
	int	s;
	int	myint;

	myint = 0;
	s = 0;
	i = 0;
	t = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+' || str[i] == '-')
			t++;
		if (str[i] == '-')
			s++;
		i++;
	}
	if (t > 1 || str[i] < '0' || str[i] > '9')
		return (0);
	ft_trint(i, &myint, str);
	if (s > 0)
		myint *= -1;
	return (myint);
}
