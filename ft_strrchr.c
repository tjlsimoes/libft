/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:53 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/17 14:51:14 by tjorge-l         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*c_str;

	i = alt_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			c_str = (char *)&(s[i]);
			return (c_str);
		}
		i--;
	}
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main(void)
// {
// 	//////////////// Test 1:
// 	// const char	str[] = "hello";
// 	// char	c = 'l';

// 	// printf("%s\n", ft_strrchr(str, c));
// 	// printf("%s\n", strrchr(str, c));

// 	//////////////// Test 2:
// 	// const char	str[] = "hello";
// 	// char	c = 'H';
// 	// char	*c_str = ft_strrchr(str, c);

// 	// write(1,&c_str, 1);
// 	// printf("%s\n", c_str);
// 	// printf("%s\n", strrchr(str, c));

// 	//////////////// Test 3:
// 	// const char	str[] = "hello";
// 	// char	c = '\0';
// 	// char	*c_str = ft_strrchr(str, c);

// 	// write(1,&c_str, 1);
// 	// // printf("%s\n", strrchr(str, c));

// 	////////////// Test 4:

// 	// strrchr(NULL, NULL);
// 	// ft_strrchr(NULL, NULL);

// 	return (0);
// }
