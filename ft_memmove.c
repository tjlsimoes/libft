/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:22:56 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/29 15:34:07 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	temp;
	char	*source;
	char	*destination;
	size_t	i;

	source = (char *)src;
	destination = (char *)dest;
	temp = '\0';
	i = 0;
	while (i < n)
	{
		temp = source[i];
		destination[i] = temp;
		i++;
	}
	return (dest);
}

// Test are being done with strings.
// Ought one to try with different
//   data types?

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "hi";

// 	// memmove(str1, str2, 3);
// 	// printf("%s\n", str1);

// 	ft_memmove(str1, str2, 3);
// 	printf("%s\n", str1);

// 	return (0);
// }