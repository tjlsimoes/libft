/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:41:56 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 11:46:30 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("toupper('a'): %d\n", toupper('a'));
// 	printf("ft_toupper('a'): %d\n", ft_toupper('a'));

// 	printf("toupper('A'): %d\n", toupper('A'));
// 	printf("ft_toupper('A'): %d\n", ft_toupper('A'));

// 	printf("toupper('9'): %d\n", toupper('9'));
// 	printf("ft_toupper('9'): %d\n", ft_toupper('9'));
// 	return (0);
// }