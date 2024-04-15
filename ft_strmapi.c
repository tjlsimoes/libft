/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:36 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/15 14:34:29 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_str;

	new_str = (char *)malloc(ft_strlen(s) + 1);
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
// 	char	*output;

// 	output = ft_strmapi("Hello, World!", uppercase);
// 	printf("%s\n", output);
// 	return (0);
// }

// Example taken from:
// https://42.nauman.cc/2023/06/30/part-ii-ft-strmapi/