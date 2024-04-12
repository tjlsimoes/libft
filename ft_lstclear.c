/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:46:23 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/12 12:46:25 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void del(void *content)
// {
// 	free(content);
// }

void	ft_lst_clear(t_list **lst, void (*del)(void *))
{
	t_list	*previous_node;
	t_list	*current_node;

	if (!lst || !del)
		return ;
	current_node = *lst;
	while (current_node != '\0')
	{
		previous_node = current_node;
		(*del)(previous_node->content);
		current_node = previous_node->next;
		free(previous_node);
	}
	*lst = NULL;
}
