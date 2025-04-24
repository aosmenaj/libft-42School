/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:49:45 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/12 15:50:16 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	char			*s1;
	unsigned char	k;

	k = c;
	s1 = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s1[i] == k)
			return (&s1[i]);
		i++;
	}
	if (s1[i] == k)
		return (&s1[i]);
	return (0);
}
/*
int main ()
{
	const char s[] = "teste";
	int c = 'e' + 250;
	printf("%p\n", ft_strchr(s, c));
}
*/
