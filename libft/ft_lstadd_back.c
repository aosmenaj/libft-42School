/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:24:05 by aosmenaj          #+#    #+#             */
/*   Updated: 2024/02/02 16:07:00 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}
/*
int main()
{
    t_list *lst = NULL; // Inizializzo la lista come vuota

    // Creo nuovi nodi
    t_list *node1 = ft_lstnew("Primo nodo");
    t_list *node2 = ft_lstnew("Secondo nodo");
    t_list *node3 = ft_lstnew("Terzo nodo");

    // Aggiungo i nodi alla lista
    ft_lstadd_back(&lst, node1);
    ft_lstadd_back(&lst, node2);
    ft_lstadd_back(&lst, node3);

    // Stampo il contenuto della lista
    t_list *current = lst;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Ricorda di liberare la memoria quando hai finito!
    //ft_lstclear(&lst, free);
*/
