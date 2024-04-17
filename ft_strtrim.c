/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:59 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/17 15:53:24 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	alt_strlen(const char *str)
{
	size_t		i;
	size_t		count;

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
	char		*str;
	size_t		s_len;
	size_t		i;

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

static int	any_q(char c, char const *set)
{
	int		i;
	char	*chars;

	i = 0;
	chars = (char *)set;
	while (chars[i] != '\0')
	{
		if (chars[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*str;
	char		*new_str;

	str = (char *)s1;
	while (any_q(*str, set))
		str++;
	if (!(*str))
		return (alt_strdup(""));
	i = alt_strlen(str) - 1;
	while (any_q(str[i], set))
		i--;
	new_str = (char *)malloc(i + 2);
	if (!new_str)
		return (NULL);
	j = 0;
	while (j < i + 1)
	{
		new_str[j] = str[j];
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}

// int	main(void)
// {
// 	char *s = ft_strtrim("   xxx   xxx", " x");
// 	return (0);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*str;
// 	const char	*set;
// 	char		*output;

// 	set = "abc";
// 	// str = "abchello";
// 	// str = "abcabchello";
// 	// str = "achello";
// 	// str = "abchelloabc";
// 	// str = "abchelloacabc";
// 	str = "dabchelloacabcd";

// 	output = ft_strtrim(str, set);

// 	printf("%s|\n", output);
// 	free(output);
// 	return (0);
// }