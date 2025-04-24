/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:30:46 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/13 11:31:31 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
		{
			j = ((unsigned char)(str1[i])
					- (unsigned char)(str2[i]));
			if (j == 0)
				return (j);
			else if (j < 0)
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
/*
int main (void)
{
	char src[] = "cane";
	char dest[] = "can";
	printf("%d\n", ft_strncmp(dest, src, 5));
	printf("%d\n", strncmp(dest, src, 5));
}
*/
