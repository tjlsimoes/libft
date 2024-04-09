/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:57:15 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/09 16:15:05 by tjorge-l         ###   ########.fr       */
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
//////////////////////////////////////////////////////////////////////





#include <string.h>

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int		dest_len;
	unsigned int		total_len;
	const char	*s;

	if ((!dst || !src) && !size)
		return (0);
	s = src;
	dest_len = 0;
	while (*(dst + dest_len) && dest_len < size)
		dest_len++;
	if (dest_len < size)
		total_len = dest_len + ft_strlen(s);
	else
		return (size + ft_strlen(s));
	while (*s && (dest_len + 1) < size)
	{
		*(dst + dest_len) = *s++;
		dest_len++;
	}
	*(dst + dest_len) = '\0';
	return (total_len);
}

// unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
// {
// 	unsigned int	i;
// 	unsigned int	j;

// 	i = 0;
// 	j = 0;
// 	while (i < size && dst[i])
// 		i++;
// 	while(i + j < size - 1 && src[j])
// 	{
// 		dst[i + j] = src[j];
// 		j++;
// 	}
// 	if (i != size)
// 		dst[i + j] = '\0';
// 	return (i + ft_strlen(src));
// }

// unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
// {
// 	unsigned int	i;
// 	unsigned int	dst_len;

// 	dst_len = ft_strlen(dst);
// 	i = 0;
// 	while (dst[i] != '\0')
// 		dst++;
// 	i = 0;
// 	while (i <= size - dst_len)
// 	{
// 		*dst = *src;
// 		dst++;
// 		src++;
// 		i++;
// 		if (i == size - dst_len)
// 			*dst = '\0';
// 	}
// 	if (size > dst_len)
// 		return (dst_len + ft_strlen(src));
// 	return (size);
// }

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