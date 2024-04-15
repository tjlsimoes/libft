/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:20 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/15 12:41:24 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	char			*src_pt;
	unsigned int	total;

	i = 0;
	src_pt = (char *)src;
	while (dst[i] && i < size)
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	else
		total = i + ft_strlen(src);
	while (*src_pt && i < size - 1)
	{
		dst[i] = *src_pt;
		src_pt++;
		i++;
	}
	dst[i] = '\0';
	return (total);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";

// 	printf("%d\n", ft_strlcat(dest, src, 0));
// 	if (ft_strlcat(dest, src, 0) == strlen(src))
// 		printf("Success!\n");
// 	return (0);
// }

// strlcpy() and strlcat() take the full size of 
// the buffer (not just the length) and guarantee 
// to NUL-terminate the result (in the case of 
// strlcat(), as long as there is at least one byte
// free in dst).

// The strlcat() function appends the NUL-terminated
// string src to the end of dst. It will append at
// most size - strlen(dst) - 1 bytes, NUL-terminating
// the result.

// if strlcat() traverses size characters without
// finding a NUL, the length of the string is considered
// to be size and the destination string will not be
// NUL-terminated (since there was no space for the NUL).

/////////////////////////////////////// Wrong somehow:...
// If used correctly:
//  size > orig ft_strlen(dst)
//	size = final ft_strlen(dst)
//  return
//		== size
//		== ft_strlen(dst) (+ 1?)
//		== orig ft_strlen(dst)
//				+ ft_strlen(src)(+ 1?)

// If used incorrectly:
//  size == orig ft_strlen(dst)
// 			  or
//	size < orig ft_strlen(dst)