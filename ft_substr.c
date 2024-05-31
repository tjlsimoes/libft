/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:49:04 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/05/31 10:26:41 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	if (start >= ft_strlen(s) || len == 0)
		return (substring = ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		if (s[start + i + 1] == '\0' || i + 1 == len)
		{
			substring[i + 1] = '\0';
			break ;
		}
		i++;
	}
	return (substring);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char * s = ft_substr("tripouille", 100, 1);
// 	s = ft_substr("1", 42, 42000000);
// 	s = ft_substr("0123456789", 9, 10);
// 	if (!s)
// 		printf("NULL\n");
// 	else
// 	{		
// 	// printf("%d\n", strcmp(s, "9"));
// 	printf("%s\n", s);
// 	free(s);
// 	}

// 	return (0);
// }

// Two words are used to describe 'len': size and length...
// Doubt: len include null or not?

// #include <stdio.h>
// int	main(void)
// {
// 	char	*substring;

// 	substring = ft_substr("hello", 3, 1);
// 	// substring = ft_substr("hello", 3, 5);
// 	printf("%s\n", substring);

// 	// substring = ft_substr("hello", 6, 5);

// 	free(substring);
// 	return (0);
// }