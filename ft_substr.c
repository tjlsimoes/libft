/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:40:03 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/11 11:08:12 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strlen(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += 1;
		i += 1;
	}
	return (count);
}

static char	*ft_strdup(const char *s)
{
	char	*str;
	int		s_len;
	int		i;

	s_len = ft_strlen(s);
	str = (char *)malloc(s_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	substring = (char *)malloc(len + 1);
	if (start > ft_strlen(s))
		return (substring = ft_strdup(""));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (start + i > ft_strlen(s))
			return (NULL);
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