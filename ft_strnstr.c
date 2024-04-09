/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:08:28 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/09 17:00:03 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *lit, unsigned int len)
{
	unsigned int		i;
	int					j;
	int					beggining;
	char				*substring;

	if (!*lit)
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && big[i])
	{
		if (big[i] == lit[j] && i < len)
		{
			if (j == 0)
				beggining = i;
			if (lit[j + 1] == '\0')
				return (substring = (char *)(big + beggining));
			i++;
			j++;
			continue ;
		}
		else if (big[i] == lit[0])
			i--;
		j = 0;
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";

// 	// printf("%d\n", (unsigned int)-1);
// 	if (ft_strnstr(haystack, "a", -1) == haystack)
// 		printf("Success!\n");
// 	return (0);
// }

// int	main(void)
// {
// 	char	*output;
// 	printf("%s\n", ft_strnstr("zdravohi", "hi", 8));
// 	printf("%s\n", ft_strnstr("zdravohihi", "hi", 10));
// 	printf("%s\n", ft_strnstr("zdravohihi", "hi", 12));

// 	output = ft_strnstr("zdravohihi", "hello", 12);
// 	if (output)
// 	{
// 		printf("%s\n", output);
// 	}
// 	else{
// 		printf("It returned NULL.\n");
// 	}

// 	output = ft_strnstr("zdravohihi", "hi", 3);
// 	if (output)
// 	{
// 		printf("%s\n", output);
// 	}
// 	else{
// 		printf("It returned NULL.\n");
// 	}
// 	return (0);
// }