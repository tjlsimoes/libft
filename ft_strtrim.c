/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:03:43 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:52:50 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

static unsigned int	ft_strlen(const char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += 1;
		i += 1;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;
	char	*new_str;

	str = (char *)s1;
	while (any_q(*str, set))
		str++;
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