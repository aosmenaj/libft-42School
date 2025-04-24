/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:39:56 by aosmenaj          #+#    #+#             */
/*   Updated: 2024/02/02 16:05:48 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_qtdelim(const char *s, char c)
{
	int		i;
	int		qtstr1;

	qtstr1 = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			qtstr1++;
		while (s[i] != c && s[i])
			i++;
	}
	return (qtstr1);
}

int	ft_count(char const *s1, int count, char c, unsigned int *m)
{
	int	i;

	i = *m;
	while (*s1 == c && *s1)
	{
		s1++;
		i++;
	}
	*m = i;
	while (*s1 != c && *s1)
	{
		count++;
		s1++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**sp0;
	unsigned int	m;
	int				i;
	int				count;

	count = 0;
	i = 0;
	m = 0;
	sp0 = (char **)malloc((ft_qtdelim(s, c) + 1) * sizeof(char *));
	if (!sp0)
		return (NULL);
	while (i < ft_qtdelim(s, c))
	{
		count = ft_count(&s[m], 0, c, &m);
		sp0[i] = ft_substr(s, m, count);
		m = m + (unsigned int)count;
		i++;
	}
	sp0[i] = NULL;
	return (sp0);
}

int main ()
{
    char *string = " ";
    char **s = ft_split(string, ' ');
    int i;
    
    i = 0;
    while(s[i] != NULL)
    {
        printf("%s\n", s[i]);
        i++;
    }
}
