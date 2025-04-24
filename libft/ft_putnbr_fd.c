/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:44:46 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/19 13:45:12 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_scrivi(int i, char *seq, int fd)
{
	while (i >= 0)
	{
		write(fd, &seq[i], 1);
		i--;
	}
}

void	ft_fd(int fd)
{
	if (fd < 0)
		return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	int			i;
	char		seq[10];

	ft_fd(fd);
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * -1;
	}
	i = 0;
	while (n > 0)
	{
		seq[i++] = n % 10 + '0';
		n = n / 10;
	}
	i--;
	ft_scrivi(i, seq, fd);
}
