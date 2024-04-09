/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:57:15 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:52:23 by tjorge-l         ###   ########.fr       */
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

unsigned int	strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_len;

	dst_len = ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0')
		dst++;
	i = 0;
	while (i <= size - dst_len)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
		if (i == size - dst_len)
			*dst = '\0';
	}
	if (size > dst_len)
		return (dst_len + ft_strlen(src));
	return (size);
}

// strlcpy() and strlcat() take the full size of 
// the buffer (not just the length) and guarantee 
// to NUL-terminate the result (in the case of 
//strlcat(), as long as there is at least one byte
// free in dst).

// The strlcat() function appends the NUL-terminated
// string src to the end of dst. It will append at
// most size - strlen(dst) - 1 bytes, NUL-terminating
// the result.

// if strlcat() traverses size characters without
// finding a NUL, the length of the string is considered
// to be size and the destination string will not be
// NUL-terminated (since there was no space for the NUL).

// If used correctly:
//  size > orig ft_strlen(dst)
//	size = final ft_strlen(dst)
//  return
//		== size
//		== ft_strlen(dst)
//		== orig ft_strlen(dst)
//				+ ft_strlen(src)

// If used incorrectly:
//  size == orig ft_strlen(dst)
// 			  or
//	size < orig ft_strlen(dst)