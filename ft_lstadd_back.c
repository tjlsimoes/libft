/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:46:13 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/16 17:16:33 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!new)
		return ;
	node = *lst;
	if (!node)
	{
		*lst = new;
		return ;
	}
	while (node->next != NULL)
		node = node->next;
	node->next = new;
}

// Should new's next be set to NULL?

// int	main(void)
// {
// 	t_list	*original;
// 	t_list	*new;
// 	t_list	*new_end;
// 	t_list	*last;
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

// 	printf("Size: %d\n", ft_lstsize(new));

// 	last = ft_lstlast(new);
// 	if (last)
// 		printf("Previous last node content: %s\n", (char *)last->content);

// 	new_end = ft_lstnew("After!");
// 	ft_lstadd_back(&new, new_end);

// 	last = ft_lstlast(new);
// 	if (last)
// 		printf("New last node content: %s\n", (char *)last->content);

// 	node = new;
// 	while (node)
// 	{
// 		previous = node;
// 		node = previous->next;
// 		free(previous);
// 	}

// 	return (0);
// }