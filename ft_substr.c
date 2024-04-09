/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:40:03 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:52:52 by tjorge-l         ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	substring = (char *)malloc(len + 1);
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