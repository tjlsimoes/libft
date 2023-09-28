/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:46:54 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 11:48:35 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("tolower('a'): %d\n", tolower('a'));
// 	printf("ft_tolower('a'): %d\n", ft_tolower('a'));

// 	printf("tolower('A'): %d\n", tolower('A'));
// 	printf("ft_tolower('A'): %d\n", ft_tolower('A'));

// 	printf("tolower('9'): %d\n", tolower('9'));
// 	printf("ft_tolower('9'): %d\n", ft_tolower('9'));
// 	return (0);
// }