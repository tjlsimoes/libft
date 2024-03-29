/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:23:27 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/29 11:54:59 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	node = *lst;
	if (!node)
	{
		node = new;
		return ;
	}
	while (node->next != '\0')
		node = node->next;
	node->next = new;
}

// Should new's next be set to NULL?