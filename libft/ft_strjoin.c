/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:45:22 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/17 11:45:56 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	char	*con;

	l = ft_strlen(s1) + ft_strlen(s2);
	con = (char *)malloc((l) * sizeof(char) + 1);
	if (!con)
	{
		free(con);
		return (0);
	}
	ft_memcpy(con, s1, ft_strlen(s1));
	ft_memcpy(con + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (con);
}
/*
int main (void)
{
    //char *s1 = "my favorite animal is";
 	//char *s2 = " ";
 	char *s3 = "the nyancat";
 	char *s4 = "xy favorite animal is ";
 	//char *tmp = ft_strjoin(s1, s2);
 	char *res = ft_strjoin(s4, s3);

    printf("%s\n", res);
    //printf("%s\n", strjoin(src, s2));
}
*/
