/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:36:12 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/29 16:30:48 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*source;
	char		*destination;
	size_t		i;

	i = 0;
	source = (char *)src;
	destination = (char *)dest;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}

// How could this overlap occur?

// Need to check for an overlap?

// How to check for an overlap?
// if src lies in between dst and dst + ft_strlen(dst)
// if dst lies in between src and src + ft_strlen(src)

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "hi";

// 	memcpy(str1, str2, 3);
// 	printf("%s\n", str1);

// 	ft_memcpy(str1, str2, 3);
// 	printf("%s\n", str1);

// 	return (0);
// }

// int main() 
// { 
// 	char csrc[] = "GeeksforGeeks"; 
// 	char cdest[100]; 
// 	ft_memcpy(cdest, csrc, strlen(csrc)+1); 
// 	printf("Copied string is %s", cdest); 

// 	int isrc[] = {10, 20, 30, 40, 50}; 
// 	int n = sizeof(isrc)/sizeof(isrc[0]); 
// 	int idest[n], i; 
// 	ft_memcpy(idest, isrc, sizeof(isrc)); 
// 	printf("\nCopied array is "); 
// 	for (i=0; i<n; i++) 
// 		printf("%d ", idest[i]);
// 	printf("\n");
// 	return 0; 
// } 