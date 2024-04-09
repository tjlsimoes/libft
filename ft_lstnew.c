/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:01:12 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:51:45 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list *));
	if (!lstnew)
		return (NULL);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*string;
// 	t_list	*output;

// 	string = "Hello";
// 	output = ft_lstnew(string);

// 	printf("%s\n", (char *) output->content);
// 	if (!output->next)
// 		printf("Next == NULL\n");

// 	free(output);
// 	return (0);
// }