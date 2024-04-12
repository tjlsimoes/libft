/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:32:28 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/12 10:15:26 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nbr_strings(char const *s, char c)
{
	int		i;
	int		k;
	int		count;

	i = 0;
	k = -1;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && k > 0)
		{
			k = -1;
		}
		else if (s[i] != c && k < 0)
		{
			k = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*get_substring(char const *s, int b, int end)
{
	int		i;
	char	*substring;

	substring = (char *)malloc((end - b) + 2);
	i = 0;
	while (b + i < end)
	{
		substring[i] = s[b + i];
		i++;
	}
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		b;
	char	**array;

	array = (char **)malloc((get_nbr_strings(s, c) + 1) * sizeof(char *));
	b = -1;
	j = 0;
	i = 0;
	while (j < get_nbr_strings(s, c))
	{
		if ((s[i] == c || s[i] == '\0') && b >= 0)
		{
			array[j++] = get_substring(s, b, i);
			b = -1;
		}
		if (s[i] != c && b < 0)
			b = i;
		i++;
	}
	array[j] = NULL;
	return (array);
}

// Simple example:
// s = "Hi there! How are you doing?";
// c = ' ';
// Number of strings == 6
// 				  == Count of c + 1

// What if s ends on c? Like:
// s = "Hi there! How are you doing? ";
// c = ' ';
// Count of c == 6
// Number of strings == 6 
// 				  != Count of c - 1

// A similar problem seems to arise if s
// starts with c. Like:
// s = " Hi there! How are you doing?";
// c = ' ';
// Count of c == 6
// Number of strings == 6 
// 				  != Count of c - 1

// The question then seems to be:
// Do I need to know the number of strings
//   that will result from the split, from
//   the get-go or will it be possible to
//   add strings as they are found (or
//   something like that).

// Because, in fact, there is not only the
// cases where s ends on or begins on c.
// The case for multiple consecutive c, in
// the beginning, middle or end of s also has
// to be accounted for.
// Unless a NULL string is to be saved between
// each two consecutive c...

// Question:
// How to allocate memory for an array of strings?
// - Allocation of pointer to initial pointer/string.
// 						or
// - Allocation of pointer to initial pointer plus
//   memory required for each string
// 						?
// Allocation of memory for one string
// == allocation of nbr bytes with NULL terminator,
// because a string is nothing more than a pointer to
// the initial character of said string.

// https://www.geeksforgeeks.org/array-of-strings-in-c/
// seems to establish a difference between: array of strings
// and array of pointers of strings...
// Same thing here:
// https://stackoverflow.com/questions/1088622/how-do
// -i-create-an-array-of-strings-in-c
// ------------------------------------------------------
// Instead of using a 2-d array of char, 
// you can store a 1-d array of pointers to char:

// char *strs[NUMBER_OF_STRINGS];

// [
// 	Which is somewhat analogous to:
// char	**str;
// and then 'mallocing' the nbr pointers/strings,
// 			right?
// ]

// Note that in this case, you have only allocated memory
// to hold the pointers to the strings; the memory for
// the strings themselves must be allocated elsewhere 
// (either as static arrays or by using malloc() or calloc()).

// ------------------------------------------------------
// ft_split seems to be somewhat analogous to strtok() function.
// char *strtok(char *str, const char *delim)

// str: The string which is to be split
// delim: The character on the basis of which the split will be done

// The function performs one split and returns a pointer to the token
// split up. A null pointer is returned if the string cannot be split.

// To find all possible splits of the string, based on a given delimiter,
// the function needs to be called in a loop.

// A sequence of calls to strtok() that operate on the same string
// maintains a pointer that determines the point from which to start
// searching for the next token.  The first call to strtok() sets
// this pointer to point to the first byte of the string.  The start
// of the next token is determined by scanning forward for the next
// nondelimiter byte in str.  If such a byte is found, it is taken
// as the start of the next token.  If no such byte is found, then
// there are no more tokens, and strtok() returns NULL.  (A string
// that is empty or that contains only delimiters will thus cause
// strtok() to return NULL on the first call.)

// The end of each token is found by scanning forward until either
// the next delimiter byte is found or until the terminating null
// byte ('\0') is encountered.  If a delimiter byte is found, it is
// overwritten with a null byte to terminate the current token, and
// strtok() saves a pointer to the following byte; that pointer will
// be used as the starting point when searching for the next token.
// In this case, strtok() returns a pointer to the start of the
// found token.

// From the above description, it follows that  a  sequence
// of  two or more contiguous delimiter bytes in the parsed
// string is considered to be a single delimiter, and  that
// delimiter  bytes  at  the start or end of the string are
// ignored.  Put another way: the tokens returned  by  strtok()
// are  always nonempty strings.  Thus, for example,
// given the string "aaa;;bbb,", successive calls  to  strtok()
// that  specify the delimiter string ";," would return the
// strings  "aaa"  and  "bbb",  and  then  a  null pointer.

// ---------------------------------------------------------
// |||| Assumption: ft_split does not return empty strings, i.e.
//                  contigous delimiter bytes considered to be
// 				 a single delimiter.

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*str;
// 	char		**output;
// 	int			i;

// 	// str = "Hi there! How are you doing?";
// 	// printf("%d\n", get_nbr_strings(str, ' '));

// 	// str = " Hi there! How are you doing?";
// 	// printf("%d\n", get_nbr_strings(str, ' '));

// 	// str = "  Hi there! How are you doing?";
// 	// printf("%d\n", get_nbr_strings(str, ' '));

// 	// str = "  Hi there! How are you doing?  ";
// 	// printf("%d\n", get_nbr_strings(str, ' '));

// 	// str = "  Hi  there! How    are you doing?  ";
// 	// printf("%d\n", get_nbr_strings(str, ' '));

// 	// str = "Hi there! How are you doing?";
// 	// str = " Hi there! How are you doing?";
// 	// str = "  Hi there! How are you doing?";
// 	// str = "  Hi there! How are you doing?  ";
// 	str = "  Hi  there! How    are you doing?  ";
// 	output = ft_split(str, ' ');

// 	i = 0;
// 	while (output[i] != NULL)
// 	{
// 		printf("%s\n", output[i]);

// 		i++;
// 	}
// 	while (i >= 0)
// 	{
// 		free(output[i]);
// 		i--;
// 	}
// 	free(output);
// 	return (0);
// }

// Subject lists free() as external function...
// Is it of required use though?