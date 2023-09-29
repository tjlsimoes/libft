/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:37:18 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/29 15:05:53 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// Not thoroughly tested.

// #include <stdio.h>
// #include <string.h>
  
// int main()
// {
//     char str[50] = "GeeksForGeeks is for programming geeks.";
// 	char str2[50] = "GeeksForGeeks is for programming geeks.";

//     printf("\nBefore memset(): %s\n", str);
//     // Fill 8 characters starting from str[13] with '.'
//     memset(str + 13, '.', 8*sizeof(char));
// 	ft_memset(str2 + 13, '.', 8*sizeof(char));
//     printf("After memset():     %s\n", str);
// 	printf("After ft_memset():  %s\n", str2);
//     return 0;
// }

// void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// 	printf("\n");
// }
  
// int main()
// {
//     int n = 10;
//     int arr[n];
// 	int	arr2[n];

// 	printArray(arr, n);
//     // Fill whole array with 100.
//     memset(arr, -1, n * 4);
//     printf("Array after memset()\n");
//     printArray(arr, n);

// 	ft_memset(arr2, -1, n*sizeof(arr[0]));
//     printf("Array after memset()\n");
// 	printArray(arr2, n);
  
//     return 0;
// }

// Note that the above code doesn’t set array values to 10 as memset works
//  character by character and an integer contains more than one bytes (or
//  characters).

// However, if we replace 10 with -1, we get -1 values. Because
//  representation of -1 contains all 1s in case of both char and int.