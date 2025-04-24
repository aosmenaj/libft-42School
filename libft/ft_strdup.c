/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:42:07 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/16 17:42:39 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	nume;
	char	*cpy;

	nume = ft_strlen(str) + 1;
	cpy = (char *)malloc(nume * sizeof(char));
	if (!cpy)
	{
		free(cpy);
		return (NULL);
	}
	ft_memcpy(cpy, str, nume);
	return ((char *)cpy);
}
