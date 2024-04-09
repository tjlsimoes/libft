/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:08:28 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:52:41 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *lit, unsigned int len)
{
	unsigned int		i;
	int					j;
	int					beggining;
	char				*substring;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (!big[i])
			return (0);
		if (big[i] == lit[j] && i < len)
		{
			if (j == 0)
				beggining = i;
			if (lit[j + 1] == '\0')
				return (substring = (char *)big + beggining);
			i++;
			j++;
			continue ;
		}
		j = 0;
		i++;
	}
	return (0);
}

// #include <stdio.h>
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