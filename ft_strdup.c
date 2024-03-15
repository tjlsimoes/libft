/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:43:34 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/15 15:56:00 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strlen(const char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += 1;
		i += 1;
	}
	return (count);
}

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