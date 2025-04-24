/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:57:57 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/11/01 14:57:59 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!del)
	{
		return ;
	}
	if (*lst)
	{
		while (*lst)
		{
			temp = (*lst)-> next;
			(*del)((*lst)-> content);
			free (*lst);
			*lst = temp;
		}
		*lst = NULL;
	}
	else
		return ;
}
/*
void	del_content(void *content)
{
	free(content);
}

int main ()
{
	t_list *list = NULL;

	ft_lstadd_back(&list, (ft_lstnew(ft_strdup("1"))));
	ft_lstadd_back(&list, (ft_lstnew(ft_strdup("2"))));
	ft_lstadd_back(&list, (ft_lstnew(ft_strdup("3"))));

	t_list *current;

	current = list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current -> content);
		current = current -> next;
	}
	
	ft_lstclear(&list, del_content);

	current = list;
	while (current)
	{
		printf("%s\n", (char *)current -> content);
		current = current -> next;
	}
}
*/
