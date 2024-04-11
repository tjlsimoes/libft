/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:36:37 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/11 16:41:53 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long nmemb, unsigned long size)
{
	char			*array;
	unsigned long	i;

	if (nmemb == 0 || size == 0
		|| size * nmemb > 2147483647)
		return (NULL);
	array = (char *)malloc(nmemb * size);
	if (!array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = 0;
		i++;
	}
	return ((void *)array);
}

////////////////// Test 1:

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	int	nmemb;
// 	int	*output;

// 	nmemb = 5;
// 	output = (int *)ft_calloc(nmemb, sizeof(int));
// 	i = 0;
// 	while (i < nmemb)
// 	{
// 		printf("%d\n", output[i]);
// 		i++;
// 	}
// 	free(output);

// 	return (0);
// }

////////////////// Test 2:
// Only works with ft_calloc being cast
// char * and not int *. Why exactly does
// casting to char * not cause Test 1 to fail?

// #include <stdio.h>
// int main(void) {

//  // Structure of student
//   struct student {
//     char rollNumber[3];
//     char name[64];
//   };

//   // Pointer variables of struct student type
//   struct student *sptr;
//   struct student *tmp;

//   // variables
//   int i = 0;
//   int numberOfStudents = 3;

//   // Using calloc function to allocate the memory
//   sptr = (struct student *) ft_calloc(numberOfStudents, 
//									sizeof(struct student));

//   // For loop to enter the student details
//   for(i = 0, tmp = sptr; i < numberOfStudents; i++, tmp++) {
//     printf("Enter detail of student #%d\n", (i+1));
//     printf("Enter Roll Number: ");
//     scanf("%s", tmp->rollNumber);
//     printf("Enter Name: ");
//     scanf("%s", tmp->name);
//   }

//   // For loop to display the student details
//   printf("\n\nFollowing are the student details:\n");
//   for(i = 0, tmp = sptr; i < numberOfStudents; i++, tmp++) {
//     printf("Detail of student #%d\n", (i+1));
//     printf("Roll Number: %s\n", tmp->rollNumber);
//     printf("Name: %s\n", tmp->name);
//   }

//   // Freeing up the allocated memory.
//   free(sptr);

//   return 0;
// }

// Possible use of bzero function?

// man calloc:
// The  calloc()  function  allocates
// memory for an array of nmemb elements
// of size bytes each and returns a
// pointer to the allocated memory.

// The memory is set to zero.

// If nmemb or size is 0,  then  calloc()
// returns  either  NULL,  or  a unique
// pointer value that can later be successfully
// passed to free().

// If the multiplication of nmemb and size
// would result in integer overflow, then calloc()
// returns  an  error.

// The calloc() function in C is used to allocate
// a specified amount of memory and then initialize
// it to zero.
// The function returns a void pointer to this memory
// location, which can then be cast to the desired type.
// The function takes in two parameters that collectively
// specify the amount of memory ​​to be allocated.~

// https://www.scaler.com/topics/calloc-function-in-c/