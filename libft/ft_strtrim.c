/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:36:04 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/17 12:37:04 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_contr(int *i, int *f, char const *s1, char const *set)
{
	int	j;

	j = 0;
	(*f)--;
	while (set[j] != '\0')
	{
		if (s1[*i] == set[j] || s1[*f] == set[j])
		{
			if (s1[*i] == set[j])
				(*i)++;
			if (s1[*f] == set[j])
				(*f)--;
			j = 0;
			if (*f < *i)
				return ;
		}
		else
			j++;
	}
}

char	*ft_malloc(int l, int i)
{
	char	*trimmed;

	if (l == 0 && l == i)
	{
		trimmed = (char *)malloc((l + 1) * sizeof(const char));
		trimmed[0] = '\0';
	}
	else
		trimmed = (char *)malloc((l + 2) * sizeof(const char));
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		f;
	int		c;

	f = ft_strlen(s1);
	i = 0;
	c = 0;
	ft_contr(&i, &f, s1, set);
	if (f < i)
		return (ft_malloc(0, 0));
	trimmed = ft_malloc((f - i), i);
	if (!trimmed)
		return (NULL);
	while (i <= f)
	{
		trimmed[c] = s1[i];
		i++;
		c++;
	}
	trimmed[c] = '\0';
	return (trimmed);
}
/*
int	main ()
{
	char *s1 = "  \t \t \n   \n\n\n\t";
 	char *ret = ft_strtrim(s1, "Hello \t  Please\n Trim me !");
 	//char *ret1 = strtrim(s1, " \n\t");
 	printf("%s\n", ret);
 	//printf("%s\n", ret1);
}
*/
