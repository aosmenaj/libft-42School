/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:09:03 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/18 14:09:09 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_cpy(int i, int c, char *ret, char *seq)
{
	while (i >= 0)
	{
		ret[c] = seq[i];
		i--;
		c++;
	}
	ret[c] = '\0';
}

char	*ft_memory(int i, int j, char *seq, int n)
{
	int		c;
	char	*ret;

	if (j == 1)
	{
		c = 1;
		ret = (char *)malloc((i + 3) * sizeof(char));
		if (!ret)
			return (NULL);
		ret[0] = '-';
		if (n == -2147483648)
			seq[0] = '8';
		ft_cpy(i, c, ret, seq);
	}
	else
	{
		c = 0;
		ret = (char *)malloc((i + 2) * sizeof(char));
		if (!ret)
			return (NULL);
		ft_cpy(i, c, ret, seq);
	}
	return (ret);
}

void	ft_seq(char *seq, int *i, int n)
{
	int	j;

	j = *i;
	while (n > 0)
	{
		seq[j] = n % 10 + '0';
		n = n / 10;
		j++;
	}
	j--;
	*i = j;
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	seq[10];
	int		k;

	k = n;
	j = 0;
	i = 0;
	if (n == 0)
	{
		seq[0] = '0';
		return (ft_memory(i, j, seq, n));
	}
	if (n < 0)
	{
		if (n == -2147483648)
			k = n - 1;
		else
			k = n * -1;
		j = 1;
	}
	ft_seq(seq, &i, k);
	return (ft_memory(i, j, seq, n));
}
/*
int main ()
{
	char *res = ft_itoa(10);
	printf("%s", res);
	free(res);
}
*/
