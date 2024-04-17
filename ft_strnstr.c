/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:48:47 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/17 15:43:05 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reset_idx_search(size_t *lit_idx, size_t *big_idx)
{
	*lit_idx = 0;
	*big_idx += 1;
}

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		beggining;

	if (!*lit)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i])
	{
		while (i + j < len)
		{
			if (big[i + j] == lit[j])
			{
				if (j == 0)
					beggining = i;
				if (lit[j++ + 1] == '\0')
					return ((char *)(big + beggining));
			}
			else
				break ;
		}
		reset_idx_search(&j, &i);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";

// 	// printf("%d\n", (unsigned int)-1);
// 	if (ft_strnstr(haystack, needle, -1) == haystack + 1)
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
