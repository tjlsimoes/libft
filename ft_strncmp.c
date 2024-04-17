/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:41 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/17 15:39:18 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%d\n", strncmp("test\200", "test\0", 6));
// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
// 	return (0);
// }
// int main(void)
// {
// 	printf("%d\n", strncmp("hello", "zdravo", 0));
// 	printf("%d\n", ft_strncmp("hello", "zdravo", 0));

// 	printf("%d\n", strncmp("hello", "zdravo", 6));
// 	printf("%d\n", ft_strncmp("hello", "zdravo", 6));

// 	printf("%d\n", strncmp("hello", "zdravo", 2));
// 	printf("%d\n", ft_strncmp("hello", "zdravo", 2));

// 	printf("%d\n", strncmp("hello", "Z", 1));
// 	printf("%d\n", ft_strncmp("hello", "Z", 1));

// 	printf("%d\n", strncmp("hello", "", 1));
// 	printf("%d\n", ft_strncmp("hello", "", 1));

// 	printf("%d\n", strncmp("", "Z", 1));
// 	printf("%d\n", ft_strncmp("", "Z", 1));
// 	return (0);
// }