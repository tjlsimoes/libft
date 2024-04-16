/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:46:36 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/16 15:22:12 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void del(void *content)
// {
// 	free(content);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	t_list	*original;
// 	t_list	*new;
// 	t_list	*new_end;
// 	// t_list	*last;
// 	// t_list	*previous;
// 	t_list	*node;

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
// 	printf("After ft_lstiter\n");

// 	ft_lstiter(new, (*str_toupper));

// 	node = new;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	node = new;
// 	ft_lstclear(&new, (*del));
// 	if (!new)
// 		printf("Pointer to the list is set to NULL\n");

// 	return (0);
// }


// int	main(void)
// {
// 	t_list	*original;
// 	t_list	*new;
// 	t_list	*new_end;
// 	// t_list	*last;
// 	// t_list	*previous;
// 	t_list	*node;

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
// 	printf("After ft_lstiter\n");

// 	del(new->content);

// 	ft_lstiter(new, (*str_toupper));

// 	node = new;
// 	while (node)
// 	{
// 		if (node->content)
// 			printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}

// 	new->content = ft_strdup("Reborn!");
// 	node = new;
// 	ft_lstclear(&new, (*del));
// 	if (!new)
// 		printf("Pointer to the list is set to NULL\n");

// 	return (0);
// }