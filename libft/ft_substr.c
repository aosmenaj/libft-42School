/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:41:10 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/16 18:49:59 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memory1(char const *s, size_t len, unsigned int start)
{
	char	*substr1;

	if (len > ft_strlen(s))
		substr1 = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	else
	{
		if (len - start < len && len == ft_strlen(s))
			substr1 = (char *)malloc(((len - start) + 1) * sizeof(char));
		else
			substr1 = (char *)malloc((len + 1) * sizeof(char));
	}
	return (substr1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr = ft_memory1(s, len, start);
	if (!substr)
	{
		free(substr);
		return (NULL);
	}
	j = 0;
	i = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
/*
int main ()
{
	char	str[] = "malloc protection !";
	char	*strsub;
        strsub = ft_substr(str, 0, 5);
        printf("%s\n", strsub);
}
*/
