/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:53:04 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:51:18 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("%d\n", isprint(32));
// 	printf("%d\n", isprint(' '));
// 	printf("%d\n", isprint(31));
// 	printf("%d\n", isprint('	'));

// 	printf("%d\n", ft_isprint(32));
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint(31));
// 	printf("%d\n", ft_isprint('	'));

// 	return (0);
// }