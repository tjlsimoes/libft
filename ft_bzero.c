/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:07:57 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/29 15:19:15 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
		str[i++] = '\0';
}

// Need for check of end of s?
// If void *s == char *s,
//   a simple check for '\0'
//   would do the trick.
// However, void *s can not be
//   a char *s.

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "hello";

// 	// bzero(&(str1[3]), 1);
// 	// printf("%s\n", str1);

// 	ft_bzero(&(str1[3]), 8);
// 	printf("%s\n", str1);
// 	return (0);
// }