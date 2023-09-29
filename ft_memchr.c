/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:55:01 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/29 16:12:15 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;
	size_t		i;

	str = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == cc)
			return ((unsigned char *)(s + i));
		str++;
		i++;
	}
	return (NULL);
}

// More than likely it could use
//   more thorough testing...

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "hello";

// 	printf("sizeof(\"hello\"): %ld\n", sizeof("hello"));
// 	printf("memchr(str, '\\0', 5): %p \n", (char *)memchr(str, '\0', 5));
// 	printf("ft_memchr(str, '\\0', 5): %p \n", (char *)ft_memchr(str, '\0', 5));

// 	printf("memchr(str, 'l', 5): %s \n", (char *)memchr(str, 'l', 5));
// 	printf("ft_memchr(str, 'l', 5): %s \n", (char *)ft_memchr(str, 'l', 5));

// 	printf("memchr(str, 'l', 2): %s \n", (char *)memchr(str, 'l', 2));
// 	printf("ft_memchr(str, 'l', 2): %s \n", (char *)ft_memchr(str, 'l', 2));

// 	printf("memchr(str, 'a', 5): %s \n", (char *)memchr(str, 'a', 5));
// 	printf("ft_memchr(str, 'a', 5): %s \n", (char *)ft_memchr(str, 'a', 5));
// 	return (0);
// }