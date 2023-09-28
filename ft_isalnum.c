/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:16:50 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 11:55:19 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     printf("isalnum(0): %d\n", isalnum(0));
//     printf("ft_isalnum(0): %d\n", ft_isalnum(0));

//     printf("isalnum('0'): %d\n", isalnum('0'));
//     printf("ft_isalnum('0'): %d\n", ft_isalnum('0'));

// 	printf("isalnum('\\n'): %d\n", isalnum('\n'));
//     printf("ft_isalnum('\\n'): %d\n", ft_isalnum('\n'));

//     printf("isalnum('a'): %d\n", isalnum('a'));
//     printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
//     return (0); 
// }