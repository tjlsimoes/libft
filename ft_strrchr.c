/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:26:57 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 14:35:04 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	len--;
	while (len >= 0 && s[len] != c)
		len--;
	if (len < 0)
		return (NULL);
	return ((char *)(s + len));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "hello";

// 	printf("strrchr(str, '\\0'): %p \n", strrchr(str, '\0'));
// 	printf("ft_strrchr(str, '\\0'): %p \n", ft_strrchr(str, '\0'));

// 	printf("strrchr(str, 'l'): %s \n", strrchr(str, 'l'));
// 	printf("ft_strrchr(str, 'l'): %s \n", ft_strrchr(str, 'l'));

// 	printf("strrchr(str, 'a'): %s \n", strrchr(str, 'a'));
// 	printf("ft_strrchr(str, 'a'): %s \n", ft_strrchr(str, 'a'));
// 	return (0);
// }