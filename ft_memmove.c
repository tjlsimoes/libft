/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:48:04 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:51:55 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char	*dest_pt;
	char	*src_pt;

	dest_pt = (char *)dest;
	src_pt = (char *)src;
	if (dest_pt <= src_pt)
	{
		while (n--)
			*dest_pt++ = *src_pt++;
		return (dest);
	}
	else
	{
		dest_pt += n - 1;
		src_pt += n - 1;
		while (n--)
			*dest_pt-- = *src_pt--;
		return (dest);
	}
}

// Explanation here:

//https://marmota.medium.com/c-language-making-memmove-def8792bb8d5

// Failed attempt:

// void	*ft_memmove(void *dest, const void *src, unsigned int n)
// {
// 	char			*middle;
// 	char			*dest_pt;
// 	char			*src_pt;
// 	unsigned int	i;

// 	dest_pt = (char *)dest;
// 	src_pt = (char *)src;
// 	middle = src_pt;
// 	i = 0;
// 	while (i < n)
// 	{
// 		middle[i] = src_pt[i];
// 		i += 1;
// 	}
// 	i = 0;
// 	dest_pt = middle;
// 	while (i < n)
// 	{
// 		dest_pt[i] = middle[i];
// 		i += 1;
// 	}

// 	dest = (char)*dest_pt;

// 	return (dest);
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

//////////////////////// Test 1:
// int	main(void)
// {
// 	char	src[6] = "hello";
// 	char	*dest;

// 	dest = malloc(6);
// 	ft_memmove(dest, src, 6);

// 	printf("%s\n", dest);
//	free(dest);
// 	return (0);
// }

//////////////////////// Test 2:
// int	main(void)
// {
// 	char	*src;
// 	char	*dest;
// 	// char	*retur;

// 	src = (char *) malloc(3);

// 	src[0] = 'h';
// 	src[1] = 'i';
// 	src[2] = '\0';

// 	dest = src + 1;

// 	printf("%s\n", dest);
// 	ft_memmove(dest, src, 3);
// 	// memmove(dest, src, 3);
// 	printf("%s\n", dest);

// 	free(src);
// 	return (0);
// }