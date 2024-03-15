/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:37:01 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/14 18:46:29 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const char	*s1_pt;
	const char	*s2_pt;

	s1_pt = (char *)s1;
	s2_pt = (char *)s2;
	while (n && (*s1_pt != '\0' || *s2_pt != '\0'))
	{
		if (*s1_pt != *s2_pt)
			return (*s1_pt - *s2_pt);
		n--;
		s1_pt++;
		s2_pt++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("%d\n", memcmp("hello", "zdravo", 0));
// 	printf("%d\n", ft_memcmp("hello", "zdravo", 0));

// 	printf("%d\n", memcmp("hello", "zdravo", 6));
// 	printf("%d\n", ft_memcmp("hello", "zdravo", 6));

// 	printf("%d\n", memcmp("hello", "zdravo", 2));
// 	printf("%d\n", ft_memcmp("hello", "zdravo", 2));

// 	printf("%d\n", memcmp("hello", "Z", 1));
// 	printf("%d\n", ft_memcmp("hello", "Z", 1));

// 	printf("%d\n", memcmp("hello", "", 1));
// 	printf("%d\n", ft_memcmp("hello", "", 1));

// 	printf("%d\n", memcmp("", "Z", 1));
// 	printf("%d\n", ft_memcmp("", "Z", 1));
// 	return (0);
// }

// memcmp seems to restrict output to -1, 1, 0.