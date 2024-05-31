/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:25 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/05/31 10:25:18 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size < 1)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int	main(void)
// {
// ///////// Test 1:
// // 	char src[] = "coucou";
// // 	char dest[10]; memset(dest, 'A', 10);

// // 	printf("%d\n", ft_strlcpy(dest, src, 0));
// // 	if (dest[0] == 'A')
// // 		printf("Success!\n");

// ///////// Test 2:
// 	// strlcpy(NULL, "hello", 1);
// 	// ft_strlcpy(NULL, "hello", 1);
// 	return (0);
// }

// strlcpy() and strlcat() take the full size 
// of the buffer (not just the length) and 
// guarantee to NUL-terminate the result - 
// as long as size is larger than 0...

// The strlcpy() function copies up to size - 1
// characters from the NUL-terminated string src
// to dst, NUL-terminating the result.

// The strlcpy() and strlcat() functions return
// the total length of the string they tried to
// create. For strlcpy() that means the length of src.
