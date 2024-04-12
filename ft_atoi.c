/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:44:50 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/12 12:44:52 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		sign = 1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nbr = (nbr * 10) + (*nptr - 48);
		nptr++;
	}
	return (nbr * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d|\n", ft_atoi("0"));
// 	printf("%d|\n", ft_atoi("2147483647"));
// 	printf("%d|\n", ft_atoi("-2147483648"));
// 	printf("%d|\n", ft_atoi("-150"));
// 	printf("%d|\n", ft_atoi("+9752"));
// 	printf("%d|\n", ft_atoi("      +9752"));
// 	printf("%d|\n", ft_atoi("  a    +9752"));
// 	printf("%d|\n", ft_atoi("\r+9752"));
// 	printf("%d|\n", ft_atoi("\t+9752"));
// 	return (0);
// }
// 123456789 has 9 of length.
// 			==
// 1 * 10^8 +
// 2 * 10^7 +
// 3 * 10^6 +
// 4 * 10^5 +
// 5 * 10^4 +
// 6 * 10^3 +
// 7 * 10^2 +
// 8 * 10^1 +
// 9 * 10^0 +

// 0 has 1 length
// 			==
// 0 * 10^0

// -157 has 4 length
// 			==
// *-1, due to initial minus sign
// 1 * 10^2
// 5 * 10^1
// 7 * 10^0

// man atoi:
// The behavior is the same as
// 	 strtol(nptr, NULL, 10);
// RETURN VALUE: The converted value
//  or 0 on error.
// man strtol:
//The string may begin with an arbitrary amount 
//of white space (as determined by isspace(3)) 
// followed by  a single  optional '+' or '-' sign.