/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:46:30 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/16 17:16:59 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void del(void *content)
// {
// 	if (content)
// 		free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*new;
// 	t_list	*node;

// 	// new = ft_lstnew(ft_strdup("Before!"));
// 	new = NULL;

// 	node = new;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	printf("Size: %d\n", ft_lstsize(new));

// 	node = new;
// 	ft_lstdelone(new, (*del));

// 	return (0);
// }

// int	main(void)
// {
// 	// t_list	*original;
// 	t_list	*new;
// 	// t_list	*new_end;
// 	// t_list	*last;
// 	t_list	*previous;
// 	t_list	*node;

// 	// original = ft_lstnew("Hello!");
// 	// original = NULL;
// 	new = ft_lstnew(ft_strdup("Before!"));
// 	// new = NULL;

// 	// ft_lstadd_front(&original, new);
// 	node = new;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	printf("Size: %d\n", ft_lstsize(new));

// 	// new_end = ft_lstnew("After!");
// 	// ft_lstadd_back(&new, new_end);

// 	// last = ft_lstlast(new);
// 	// if (last)
// 	// 	printf("New last node content: %s\n", (char *)last->content);

// 	node = new;
// 	printf("Before ft_lstdelone:\n");
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	node = new->next;
// 	ft_lstdelone(new, (*del));

// 	printf("After ft_lstdelone:\n");

// 	// if (new->content)
// 	// {
// 	// 	printf("new's content is gone!\n");
// 	// }
// 		// printf("new is gone!\n");
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	while (node)
// 	{
// 		previous = node;
// 		node = previous->next;
// 		free(previous);
// 	}

// 	return (0);
// }
