/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:23:26 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/10 16:24:09 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}
/*
int main ()
{
	char b[] = "Hellooooo";
	size_t n = 4;
	
	ft_bzero(b, n);
	printf("%s\n", b);
	bzero(b, n);
	printf("%s\n", b);
}
*/
