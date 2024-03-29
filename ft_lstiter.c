/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:43:52 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/29 11:54:09 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void del(void *content)
// {
// 	free(content);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
