/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:01:12 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/29 10:36:23 by tjlsimoes        ###   ########.fr       */
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