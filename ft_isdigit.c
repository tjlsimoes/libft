/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:06:08 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 11:14:52 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     printf("isdigit(0): %d\n", isdigit(0));
//     printf("ft_isdigit(0): %d\n", ft_isdigit(0));

//     printf("isdigit('0'): %d\n", isdigit('0'));
//     printf("ft_isdigit('0'): %d\n", ft_isdigit('0'));
//     return (0); 
// }