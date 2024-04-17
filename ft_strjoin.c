/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:15 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/17 14:28:08 by tjorge-l         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_len;
	int		i;

	s1_len = alt_strlen(s1);
	str = (char *)malloc(s1_len + alt_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - s1_len] != '\0')
	{
		str[i] = s2[i - s1_len];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	// str = ft_strjoin("Hi", " there!");
// 	// str = ft_strjoin("", "");
// 	str = ft_strjoin("ADKJFNOnfça", "1o32y284rjnfo");
// 	printf("%s\n", str);

// 	free(str);
// 	return (0);
// }