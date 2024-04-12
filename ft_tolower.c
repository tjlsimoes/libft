/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:49:10 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/12 12:49:11 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	printf("%c\n", ft_tolower('a'));
// 	printf("%c\n", ft_tolower('z'));
// 	printf("%c\n", ft_tolower('1'));
// 	printf("%c\n", ft_tolower('@'));
// 	printf("%c\n", ft_tolower('['));
// 	printf("%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('Z'));

// 	return (0);
// }