/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:38:47 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/06 18:49:00 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("%d\n", __isascii(9));
// 	printf("%d\n", __isascii('9'));
// 	printf("%d\n", __isascii('a'));
// 	printf("%d\n", __isascii('	'));
// 	printf("%d\n", __isascii(178));

// 	printf("%d\n", ft_isascii(9));
// 	printf("%d\n", ft_isascii('9'));
// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('	'));
// 	printf("%d\n", ft_isascii(178));

// 	return (0);
// }
// __isascii()
// (((9) & ~0x7f) == 0)