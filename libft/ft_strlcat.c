/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:53:24 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/12 11:54:58 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	if (size <= lendst)
		return (lensrc + size);
	while (src[i] && (lendst + i) < size - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	if (lendst + i < size)
		dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
/*
int main ()
{
	char dest[14] = "a";
	const char src[] = "lorem ipsum dolor sit amet";
	size_t size = 0;
	
	printf("%ld\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
}
*/
