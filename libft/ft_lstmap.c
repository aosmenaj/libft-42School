/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:05:41 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/11/01 17:05:45 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;

	newlst = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		newnode = ft_lstnew((*f)(lst -> content));
		if (!newnode)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst -> next;
	}
	return (newlst);
}
/*
void	del_content(void *content)
{
	free(content);
}

void	*tolower_cont(void *cont)
{
	char	*c;

	c = (char *)(cont);
	if (*c >= 'A' && *c <= 'Z')
	{
		*c += 32;
		return (void *)(c);
	}
	else
		return (cont);
}

int main()
{
    t_list *lst = NULL;
	t_list *newlst;

    t_list *node1 = ft_lstnew(ft_strdup("A"));
    t_list *node2 = ft_lstnew(ft_strdup("B"));
    t_list *node3 = ft_lstnew(ft_strdup("C"));

    // Aggiungo i nodi alla lista
    ft_lstadd_back(&lst, node1);
    ft_lstadd_back(&lst, node2);
    ft_lstadd_back(&lst, node3);

	newlst = ft_lstmap(lst, tolower_cont, del_content);

    while (newlst != NULL)
    {
        printf("%s\n", (char *)newlst->content);
        newlst = newlst -> next;
    }
    return 0;
}
*/