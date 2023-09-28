/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:01:33 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 15:55:36 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (*s != c && *s != '\0')
		s++;
	if (*s == '\0')
		return (NULL);
	return ((char *)s);
}

// Exactly why is the casting needed?
// For output to be the same type as
//   the prototype indicates?
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "hello";

// 	printf("sizeof(\"hello\"): %ld\n", sizeof("hello"));
// 	printf("strchr(str, '\\0'): %p \n", strchr(str, '\0'));
// 	printf("ft_strchr(str, '\\0'): %p \n", ft_strchr(str, '\0'));

// 	printf("strchr(str, 'l'): %s \n", strchr(str, 'l'));
// 	printf("ft_strchr(str, 'l'): %s \n", ft_strchr(str, 'l'));

// 	printf("strchr(str, 'a'): %s \n", strchr(str, 'a'));
// 	printf("ft_strchr(str, 'a'): %s \n", ft_strchr(str, 'a'));
// 	return (0);
// }