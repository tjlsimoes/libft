/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:05 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/17 15:53:50 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*str;
	size_t		s_len;
	size_t		i;

	s_len = ft_strlen(s);
	str = (char *)malloc(s_len + 1);
	if (!str)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (i < s_len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// static size_t	alt_strlen(const char *str)
// {
// 	int		i;
// 	int		count;

// 	if (!str)
// 		return (0);
// 	i = 0;
// 	count = 0;
// 	while (str[i] != '\0')
// 	{
// 		count += 1;
// 		i += 1;
// 	}
// 	return (count);
// }

// int main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*str_dup;
// 	str_dup = ft_strdup(str);
// 	if (!str_dup)
// 		return (0);
// 	printf("%s|\n", str_dup);
// 	printf("%d\n", strcmp(str, str_dup));
// 	free(str_dup);
// 	return (0);
// }

// Case where NULL is passed?
// errno is not set to indicate the error.

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char source[] = "Something";

//     // A copy of source is created dynamically
//     // and pointer to copy is returned.
//     char *target = ft_strdup(source); 

//     printf("%s\n", target);
// 	free(target);
//     return (0);
// }

// What does
// "Conditional jump or move depends on uninitialised value(s)"
// mean?