/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:49:04 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/17 14:37:18 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	alt_strlen(const char *str)
{
	int		i;
	int		count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += 1;
		i += 1;
	}
	return (count);
}

static char	*alt_strdup(const char *s)
{
	char	*str;
	int		s_len;
	int		i;

	s_len = alt_strlen(s);
	str = (char *)malloc(s_len + 1);
	if (!str)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (i < s_len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	if (start >= alt_strlen(s) || len == 0)
		return (substring = alt_strdup(""));
	if (start + len > alt_strlen(s))
		len = alt_strlen(s) - start;
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