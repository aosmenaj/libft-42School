/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:37:38 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/10 14:38:29 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	return (b);
}
/*
int main ()
{
	char b[] = "Hello";
	int c = 'H';
	size_t l = 5;

	ft_memset(b, c, l);
	printf("%s\n", b);
	
	memset(b, c, l);
	printf("%s\n", b);
}
*/
