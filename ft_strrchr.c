/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:40:55 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:52:42 by tjorge-l         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*c_str;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			c_str = (char *)&(s[i]);
			return (c_str);
		}
		i--;
	}
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main(void)
// {
// 	//////////////// Test 1:
// 	// const char	str[] = "hello";
// 	// char	c = 'l';

// 	// printf("%s\n", ft_strrchr(str, c));
// 	// printf("%s\n", strrchr(str, c));

// 	//////////////// Test 2:
// 	// const char	str[] = "hello";
// 	// char	c = 'H';
// 	// char	*c_str = ft_strrchr(str, c);

// 	// write(1,&c_str, 1);
// 	// printf("%s\n", c_str);
// 	// printf("%s\n", strrchr(str, c));

// 	//////////////// Test 3:
// 	// const char	str[] = "hello";
// 	// char	c = '\0';
// 	// char	*c_str = ft_strrchr(str, c);

// 	// write(1,&c_str, 1);
// 	// // printf("%s\n", strrchr(str, c));

// 	return (0);
// }
