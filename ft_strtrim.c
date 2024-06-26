/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:59 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/05/31 10:26:10 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		return (ft_strdup(""));
	i = ft_strlen(str) - 1;
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