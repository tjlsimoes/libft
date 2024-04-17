/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:45:02 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/17 15:43:13 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i += 1;
	}
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char buffer[100] = "Hello, Greetings! Testing the bzero function!\n";
// 	printf("Display of buffer string before bzero function:\n%s", buffer);
// 	// bzero(buffer, 100);
// 	ft_bzero(buffer, 100);
// 	printf("Display of buffer string after bzero function:\n%s", buffer);

// 	return (0);
// }

// // https://linuxhint.com/bzero-3-c-function/