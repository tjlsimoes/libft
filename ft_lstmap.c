/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:46:48 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/16 17:17:30 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void del(void *content)
// {
// 	free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

// void del(void *content)
// {
// 	if (content)
// 		free(content);
// 	content = NULL;
// }

// void	*set_hello(void *s)
// {
// 	return (s = ft_strdup("hello"));
// }

// int	main(void)
// {
// 	t_list	*original;
// 	t_list	*new;
// 	t_list	*new_end;
// 	// t_list	*last;
// 	// t_list	*previous;
// 	t_list	*node;
// 	t_list	*new_lst;

// 	original = ft_lstnew(ft_strdup("Hello!"));
// 	// original = NULL;
// 	new = ft_lstnew(ft_strdup("Before!"));
// 	// new = NULL;

// 	ft_lstadd_front(&original, new);

// 	printf("Size: %d\n", ft_lstsize(new));

// 	new_end = ft_lstnew(ft_strdup("After!"));
// 	ft_lstadd_back(&new, new_end);

// 	node = new;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	new_lst = ft_lstmap(new, set_hello, del);

// 	printf("New list\n");
// 	node = new_lst;
// 	while (node)
// 	{
// 		if (node->content)
// 			printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	printf("Original list\n");
// 	node = new;
// 	while (node)
// 	{
// 		if (node->content)
// 			printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	ft_lstclear(&new, (*del));
// 	ft_lstclear(&new_lst, (*del));
// 	if (!new)
// 		printf("Pointer to the list is set to NULL\n");
// 	if (!new_lst)
// 		printf("Pointer to the list is set to NULL\n");
// 	return (0);
// }
