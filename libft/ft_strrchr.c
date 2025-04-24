/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:22:01 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/12 16:22:21 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*s1;
	size_t			j;
	unsigned char	k;

	s1 = (char *)s;
	i = 0;
	j = 0;
	k = c;
	while (s1[i] != '\0')
	{
		if (s1[i] == k)
			j = i;
		i++;
	}
	if (s1[j] == k)
		return (&s1[j]);
	if (s1[i] == k)
		return (&s1[i]);
	return (0);
}
/*
int main ()
{
	const char s[] = "ell, W";
	int c = '\0';
	printf("%p\n", ft_strrchr(s, c));
}
*/
