/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:34:39 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 11:40:28 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("isprint(32): %d\n", isprint(32));
// 	printf("ft_isprint(32): %d\n", ft_isprint(32));

// 	printf("isprint(' '): %d\n", isprint(' '));
// 	printf("ft_isprint(' '): %d\n", ft_isprint(' '));

// 	printf("isprint('\\b'): %d\n", isprint('\b'));
// 	printf("ft_isprint('\\b'): %d\n", ft_isprint('\b'));
// 	return (0);
// }