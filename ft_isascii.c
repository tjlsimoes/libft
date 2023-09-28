/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:25:00 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 11:33:43 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("isascii(123): %d\n", isascii(123));
// 	printf("ft_isascii(123): %d\n", ft_isascii(123));

// 	printf("isascii(128): %d\n", isascii(128));
// 	printf("ft_isascii(128): %d\n", ft_isascii(128));

// 	printf("isascii(-1): %d\n", isascii(-1));
// 	printf("ft_isascii(-1): %d\n", ft_isascii(-1));
// 	return (0); 
// }