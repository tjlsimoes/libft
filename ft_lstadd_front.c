/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:46:18 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/16 12:25:20 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	*original;
// 	t_list	*new;
// 	t_list	*previous;
// 	t_list	*node;

// 	// original = ft_lstnew("Hello");
// 	original = NULL;

// 	new = ft_lstnew("Before!");

// 	ft_lstadd_front(&original, new);
// 	node = new;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}
// 	node = new;
// 	while (node)
// 	{
// 		previous = node;
// 		node = previous->next;
// 		free(previous);
// 	}

// 	return (0);
// }