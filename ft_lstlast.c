/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:46:43 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/16 12:39:06 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// int	main(void)
// {
// 	t_list	*original;
// 	t_list	*new;
// 	t_list	*last;
// 	t_list	*previous;
// 	t_list	*node;

// 	original = ft_lstnew("Hello");
// 	// original = NULL;
// 	new = ft_lstnew("Before!");
// 	// new = NULL;

// 	ft_lstadd_front(&original, new);
// 	node = new;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	printf("%d\n", ft_lstsize(new));
// 	last = ft_lstlast(new);
// 	if (last)
// 		printf("%s\n", (char *)last->content);
// 	node = new;
// 	while (node)
// 	{
// 		previous = node;
// 		node = previous->next;
// 		free(previous);
// 	}

// 	return (0);
// }