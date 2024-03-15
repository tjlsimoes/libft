/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:12:44 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/14 10:47:11 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char				*dest_pt;
	const char			*src_pt;
	unsigned int		i;

	i = 0;
	dest_pt = dest;
	src_pt = src;
	while (i < n)
	{
		dest_pt[i] = src_pt[i];
		i += 1;
	}
	return (dest_pt);
}

// Notice what is said here:
// https://www.geeksforgeeks.org/memcpy-in-cc/
// Important Points about memcpy()
//     memcpy() doesn’t check for overflow or \0.
//     memcpy() leads to undefined behaviour when 
//	     source and destination addresses overlap.

// Does memcpy only apply to strings and not int arrays as well?
// It does also apply to int arrays.
// https://sternumiot.com/iot-blog/memcpy-c-function-
//  examples-and-best-practices/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

//////////////////////// Test 1:

// int	main(void)
// {
// 	char	src[6]= "hello";
// 	char	*dest;

// 	dest = malloc(6);

// 	ft_memcpy(dest, src, 6);
// 	// memcpy(dest, src, 6);

// 	printf("%s\n", dest);
// 	free(dest);

// 	return (0);
// }

//////////////////////// Test 2:

// int main()
// {
//     char str1[] = "Geeks";
//     char str2[] = "Quiz";

// 	printf("str1 before memcpy: %s|\n", str1);

//     // Copies contents of str2 to str1
//     // memcpy(str1, str2, sizeof(str2));
// 	ft_memcpy(str1, str2, sizeof(str2));

// 	printf("str1 after memcpy: %s|\n", str1);

//     return 0;
// }

//////////////////////// Test 3:

// int	main(void)
// {
// 	int	src[] = {1, 2, 3, 4, 5, 6};
// 	int	*dest;
// 	int	i;

// 	dest = (int *) malloc(sizeof(src));

// 	ft_memcpy(dest, src, sizeof(src));
// 	// memcpy(dest, src, sizeof(src));

// 	i = 0;
// 	while (i < 6)
// 	{
// 		printf("%d ", dest[i]);
// 		i += 1;
// 	}
// 	printf("\n");
// 	free(dest);

// 	return (0);
// }

// How does this third test pass?
// Void pointer is being cast to char *, not
// int *...?