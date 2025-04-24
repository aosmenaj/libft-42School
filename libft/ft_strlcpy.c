/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:19:49 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/12 11:20:19 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (!src || !dest || size <= 0)
		return (j);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
int main ()
{
	char dest[] = "ciao";
	const char src[] = "Hello";
	//char dest1[] = "ciao";
	size_t size = 0;
	
	printf("%ld\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	//strlcpy(dest1, src, size);
	//printf("%s\n", dest);
}
*/
