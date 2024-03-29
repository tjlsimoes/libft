/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:29:16 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/29 11:54:51 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
