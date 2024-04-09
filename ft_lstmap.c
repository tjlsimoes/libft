/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:45:59 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:51:43 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void del(void *content)
// {
// 	free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_lst;
	t_list	*current_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = (t_list **)malloc(ft_lstsize(lst) * sizeof(t_list *));
	if (!new_lst)
		return (NULL);
	current_node = *new_lst;
	while (lst)
	{
		current_node->content = ft_strdup((*f)(lst->content));
		if (!current_node->content)
			ft_lstclear(*new_lst);
		current_node = current_node->next;
		lst = lst->next;
	}
	return (*new_lst);
}
