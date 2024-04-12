/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:43:34 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/12 10:28:22 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		s_len;
	int		i;

	s_len = ft_strlen(s);
	str = (char *)malloc(s_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

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