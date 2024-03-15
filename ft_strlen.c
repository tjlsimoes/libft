/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:42:22 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/13 15:58:03 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += 1;
		i += 1;
	}
	return (count);
}

// Original function uses size_t as input.
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%zu\n", strlen("What about this?"));
// 	printf("%u\n", ft_strlen("What about this?"));

// 	printf("%zu\n", strlen(""));
// 	printf("%u\n", ft_strlen(""));

// 	printf("%zu\n", strlen("12"));
// 	printf("%u\n", ft_strlen("12"));

// 	return (0);
// }