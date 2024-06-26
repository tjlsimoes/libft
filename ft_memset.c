/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:47:27 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/05/31 10:31:26 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*str;

	if (!s)
		return (NULL);
	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i += 1;
	}
	return (str);
}

// The memset() function fills the first n bytes
// of the memory area pointed to by s with the constant byte c.

// The memset() function returns a pointer to the memory area s.

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// First Test:

// int	main(void)
// {
// 	char	str[50] = "GeeksForGeeks is for programming geeks.";

// 	printf("Before memset(): %s\n", str);
//     memset(str + 13, '.', 8 * sizeof(char));
// 	// ft_memset(str + 13, '.', 8 * sizeof(char));

//     printf("After memset():  %s\n", str);
// 	return (0);
// }

// Second Test:

// void printArray(int arr[], int n) 
// { 
// 	for (int i=0; i<n; i++) 
// 		printf("%d ", arr[i]);
// 	printf("\n");
// } 

// int	main(void)
// {
//     int	n = 10;
//     int	arr[n];

//     // Fill whole array with 0.
//     memset(arr, 0, n*sizeof(arr[0]));
// 	// ft_memset(arr, 0, n*sizeof(arr[0]));

//     printf("Array after memset()\n");
//     printArray(arr, n);

// 	return (0);
// }