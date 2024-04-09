/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:39:50 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:52:25 by tjorge-l         ###   ########.fr       */
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
		count += 1;
		i += 1;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[size] = '\0';
	return (ft_strlen(src));
}

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