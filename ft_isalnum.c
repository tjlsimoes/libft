/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:45:13 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/18 10:04:57 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("%d\n", isalnum('a'));
// 	printf("%d\n", isalnum('1'));
// 	printf("%d\n", isalnum(1));
// 	printf("%d\n", isalnum('\\'));

// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('1'));
// 	printf("%d\n", ft_isalnum(1));
// 	printf("%d\n", ft_isalnum('\\'));
// 	return (0);
// }