/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:46:28 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:51:01 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int		i;
	char				*str;

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