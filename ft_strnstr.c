/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:11:08 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 16:25:12 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// Not tested...
// How to use standard strnstr?

// #include "stdio.h"

// int	main(void)
// {
// 	printf("strnstr: %s\n", strnstr("hello", "lo", 5));
// 	printf("ft_strnstr: %s\n", ft_strnstr("hello", "lo", 5));
// 	return (0);
// }