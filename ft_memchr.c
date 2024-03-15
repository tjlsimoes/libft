/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:18:36 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/15 16:18:25 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	const char		*s_pt;
	char			*c_pt;
	unsigned int	i;

	s_pt = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_pt[i] == c)
		{
			c_pt = (char *)&(s_pt[i]);
			return (c_pt);
		}
		i++;
	}
	return ('\0');
}

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main(void)
// {
// 	//////////////// Test 1:
// 	// const char	str[] = "hello";
// 	// char	c = 'l';

// 	// printf("%s\n", (char *)ft_memchr(str, c, 6));

// 	//////////////// Test 2:
// 	// const char	str[] = "hello";
// 	// char	c = 'H';
// 	// char	*c_str = ft_memchr(str, c, 6);

// 	// write(1,&c_str, 1);

// 	//////////////// Test 3:
// 	// const char	str[] = "hello";
// 	// char	c = '\0';
// 	// char	*c_str = ft_memchr(str, c, 6);

// 	// write(1,&c_str, 1);
// 	// printf("%s\n", (char *)memchr(str, c, 6));

// 	//////////////// Test 4:
// 	// const char	array[] = {1, 2, 3, 4, 5, 6};
// 	// char	c = 3;
// 	// int		i = 0;
// 	// int		*output = (int *)ft_memchr(array, c, 6);
// 	// int		*output = (int *)memchr(array, c, 6);

// 	// while (i < 6)
// 	// {
// 	// 	printf("%d ", output[i]);
// 	// 	i += 1;
// 	// }
// 	// printf("\n");

// 	// return (0);
// }
// Function does not work with integers.
// Both c and the bytes of the memory area pointed to by s
// are interpreted as unsigned char.
