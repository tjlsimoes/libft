/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:47:10 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/12 12:47:11 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const unsigned char	*s1_pt;
	const unsigned char	*s2_pt;

	s1_pt = (unsigned char *)s1;
	s2_pt = (unsigned char *)s2;
	while (n)
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

// int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
// {
// 	const unsigned char	*s1_pt;
// 	const unsigned char	*s2_pt;

// 	s1_pt = (unsigned char *)s1;
// 	s2_pt = (unsigned char *)s2;
// 	while (n && (*s1_pt != '\0' || *s2_pt != '\0'))
// 	{
// 		printf("%d %d\n", *s1_pt, *s2_pt);
// 		if (*s1_pt != *s2_pt)
// 			return (*s1_pt - *s2_pt);
// 		n--;
// 		s1_pt++;
// 		s2_pt++;
// 	}
// 	return (0);
// }

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

// #include <stdio.h>
// int	main(void)
// {
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};

// 	printf("%d\n", ft_memcmp(s2, s3, 4));

// 	return(0);
// }

// memcmp seems to restrict output to -1, 1, 0.