/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:16:06 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/29 16:23:42 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "hello";

// 	char	str3[] = "hello5";
// 	char	str4[] = "hello1";

// 	char	str5[] = "hello";
// 	char	str6[] = "hello1";

// 	char	str7[] = "hello1";
// 	char	str8[] = "hello";

// 	printf("memcmp(str1, str2, 5): %d\n", memcmp(str1, str2, 5));
// 	printf("ft_memcmp(str1, str2, 5): %d\n", ft_memcmp(str1, str2, 5));

// 	printf("memcmp(str1, str2, 4): %d\n", memcmp(str1, str2, 4));
// 	printf("ft_memcmp(str1, str2, 4): %d\n", ft_memcmp(str1, str2, 4));

// 	printf("memcmp(str3, str4, 5): %d\n", memcmp(str3, str4, 5));
// 	printf("ft_memcmp(str3, str4, 5): %d\n", ft_memcmp(str3, str4, 5));

// 	printf("memcmp(str3, str4, 6): %d\n", memcmp(str3, str4, 6));
// 	printf("ft_memcmp(str3, str4, 6): %d\n", ft_memcmp(str3, str4, 6));

// 	printf("memcmp(str5, str6, 6): %d\n", memcmp(str5, str6, 6));
// 	printf("ft_memcmp(str5, str6, 6): %d\n", ft_memcmp(str5, str6, 6));

// 	printf("memcmp(str7, str8, 6): %d\n", memcmp(str7, str8, 6));
// 	printf("ft_memcmp(str7, str8, 6): %d\n", ft_memcmp(str7, str8, 6));

// 	printf("memcmp(str7, str8, 5): %d\n", memcmp(str7, str8, 5));
// 	printf("ft_memcmp(str7, str8, 5): %d\n", ft_memcmp(str7, str8, 5));

// 	printf("memcmp(str7, str8, 10): %d\n", memcmp(str7, str8, 10));
// 	printf("ft_memcmp(str7, str8, 10): %d\n", ft_memcmp(str7, str8, 10));
// 	return (0);
// }