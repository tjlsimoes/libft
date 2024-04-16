/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:46:59 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/16 12:27:55 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// lst = lst->next is different from
// lst++, right?

// Ought a final NULL node be counted
// in size?

// int	main(void)
// {
// 	t_list	*original;
// 	t_list	*new;
// 	t_list	*previous;
// 	t_list	*node;

// 	// original = ft_lstnew("Hello");
// 	original = NULL;
// 	// new = ft_lstnew("Before!");
// 	new = NULL;

// 	ft_lstadd_front(&original, new);
// 	node = new;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	printf("%d\n", ft_lstsize(new));

// 	node = new;
// 	while (node)
// 	{
// 		previous = node;
// 		node = previous->next;
// 		free(previous);
// 	}

// 	return (0);
// }