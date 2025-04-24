/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:05 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/10/30 18:31:46 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newli;

	newli = (t_list *)malloc(sizeof(t_list));
	if (!newli)
		return (NULL);
	newli->content = content;
	newli->next = NULL;
	return (newli);
}
