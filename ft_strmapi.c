/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:36 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/18 10:44:26 by tjorge-l         ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*new_str;

	if (!f)
		return (NULL);
	new_str = (char *)malloc(alt_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// Parameters:
// s: The string on which to iterate.
// f: The function to apply to each character.

// Return value:
// The string created from the successive application
// of 'f'.
// Returns NULL if the allocation fails.

// Description:
// Applies the function 'f' to each character of the
// string 's', and passing its index as first argument
// to create a new string resulting from successive
// applications of 'f'.

// int	ft_toupper(int c)
// {
// 	if (97 <= c && c <= 122)
// 		return (c - 32);
// 	return (c);
// }

// int	ft_tolower(int c)
// {
// 	if (65 <= c && c <= 90)
// 		return (c + 32);
// 	return (c);
// }

// char uppercase(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return ft_toupper(c);
//     else
//         return ft_tolower(c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	// char	*output;

// 	// output = ft_strmapi("Hello, World!", uppercase);
// 	// printf("%s\n", output);

// 	ft_strmapi("Hello, World!", NULL);
// 	return (0);
// }

// Example taken from:
// https://42.nauman.cc/2023/06/30/part-ii-ft-strmapi/