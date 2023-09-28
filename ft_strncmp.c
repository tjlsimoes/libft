/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:39:41 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 14:54:49 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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

// 	printf("strncmp(str1, str2, 5): %d\n", strncmp(str1, str2, 5));
// 	printf("ft_strncmp(str1, str2, 5): %d\n", ft_strncmp(str1, str2, 5));

// 	printf("strncmp(str1, str2, 4): %d\n", strncmp(str1, str2, 4));
// 	printf("ft_strncmp(str1, str2, 4): %d\n", ft_strncmp(str1, str2, 4));

// 	printf("strncmp(str3, str4, 5): %d\n", strncmp(str3, str4, 5));
// 	printf("ft_strncmp(str3, str4, 5): %d\n", ft_strncmp(str3, str4, 5));

// 	printf("strncmp(str3, str4, 6): %d\n", strncmp(str3, str4, 6));
// 	printf("ft_strncmp(str3, str4, 6): %d\n", ft_strncmp(str3, str4, 6));

// 	printf("strncmp(str5, str6, 6): %d\n", strncmp(str5, str6, 6));
// 	printf("ft_strncmp(str5, str6, 6): %d\n", ft_strncmp(str5, str6, 6));

// 	printf("strncmp(str7, str8, 6): %d\n", strncmp(str7, str8, 6));
// 	printf("ft_strncmp(str7, str8, 6): %d\n", ft_strncmp(str7, str8, 6));

// 	printf("strncmp(str7, str8, 5): %d\n", strncmp(str7, str8, 5));
// 	printf("ft_strncmp(str7, str8, 5): %d\n", ft_strncmp(str7, str8, 5));

// 	printf("strncmp(str7, str8, 10): %d\n", strncmp(str7, str8, 10));
// 	printf("ft_strncmp(str7, str8, 10): %d\n", ft_strncmp(str7, str8, 10));
// 	return (0);
// }