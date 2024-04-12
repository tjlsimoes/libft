/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:57:03 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/12 10:23:33 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nbr_digits(int n)
{
	int		count;

	if (n == 0)
		return (1);
	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	set_variables(int *n_add, int *sign_add, int *nbr_dig_add)
{
	*nbr_dig_add = get_nbr_digits(*n_add);
	if (*n_add < 0)
	{
		*nbr_dig_add += 1;
		*sign_add = -1;
		*n_add *= -1;
	}
	else
	{
		*sign_add = 1;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		nbr_digits;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	set_variables(&n, &sign, &nbr_digits);
	str = (char *)malloc(nbr_digits + 1);
	if (!str)
		return (NULL);
	str[nbr_digits--] = '\0';
	while (nbr_digits >= 0)
	{
		if (sign < 0 && nbr_digits == 0)
		{
			str[nbr_digits] = '-';
		}
		else
		{
			str[nbr_digits] = (n % 10) + 48;
			n = n / 10;
		}
		nbr_digits--;
	}
	return (str);
}

// Get number of digits
// Add byte for NULL and sign if
//   nedded.
// Fill out string from last element
// to first.

// Possible exception:
// 0

// Simple example:
// 1234567
// 1000000
//  200000

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	// printf("%d\n", get_nbr_digits(1234567));
// 	// printf("%d\n", get_nbr_digits(10));
// 	// printf("%d\n", get_nbr_digits(111));
// 	// printf("%d\n", get_nbr_digits(9999));
// 	// printf("%d\n", get_nbr_digits(12000));
// 	// printf("%d\n", get_nbr_digits(0));
// 	// printf("%d\n", get_nbr_digits(-100));
// 	// printf("%d\n", get_nbr_digits(-1234567));
// 	// printf("%d\n", get_nbr_digits(-10));
// 	// printf("%d\n", get_nbr_digits(-111));
// 	// printf("%d\n", get_nbr_digits(-9999));
// 	// printf("%d\n", get_nbr_digits(-12000));

// 	// str = ft_itoa(1234567);
// 	// str = ft_itoa(10);
// 	// str = ft_itoa(-999);
// 	// str = ft_itoa(-1200);
// 	// str = ft_itoa(2147483647);
// 	str = ft_itoa(-2147483648);

// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }

// Test for INT_MAX and INT_MIN