/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:06:51 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:52:15 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	int		s_len;
	char	*c_str;
	int		i;

	s_len = ft_strlen(s);
	i = 0;
	while (i <= s_len)
	{
		if (s[i] == (char)c)
		{
			c_str = (char *)&(s[i]);
			return (c_str);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	//////////////// Test 1:
// 	// const char	str[] = "hello";
// 	// char	c = 'l';

// 	// printf("%s\n", ft_strchr(str, c));

// 	//////////////// Test 2:
// 	// const char	str[] = "hello";
// 	// char	c = 'H';
// 	// char	*c_str = ft_strchr(str, c);

// 	// write(1,&c_str, 1);

// 	//////////////// Test 3:
// 	// const char	str[] = "hello";
// 	// char	c = '\0';
// 	// char	*c_str = ft_strchr(str, c);

// 	//////////////// Test 4:
// 	const char	str[] = "hello";
// 	int		c = 'h' + 256;
// 	char	*c_str = ft_strchr(str, c);

// 	printf("%s\n", c_str);
// 	return (0);
// }

// Passing NULL to printf causes undefined behaviour
//   as per C standard.
// GCC prints (null).

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	printf("%c\n", 't' + 256);
// 	return (0);
// }
// https://stackoverflow.com/questions/21530358/
// how-256-stored-in-char-variable-and-unsigned-char