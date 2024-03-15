/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:44:59 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/14 17:00:22 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('z'));
// 	printf("%c\n", ft_toupper('1'));
// 	printf("%c\n", ft_toupper('@'));
// 	printf("%c\n", ft_toupper('['));
// 	printf("%c\n", ft_toupper('A'));

// 	return (0);
// }