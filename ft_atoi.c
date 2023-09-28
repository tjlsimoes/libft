/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:39:57 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 15:52:45 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		i;
	int		number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = (number * 10) + (nptr[i] - '0');
		i++;
	}
	return (number * sign);
}

// #include <stdio.h>
// # include <stdlib.h>

// int	main(void)
// {

// 	printf("atoi: %d\n", atoi("1234"));
// 	printf("ft_atoi: %d\n", ft_atoi("1234"));

// 	printf("atoi: %d\n", atoi("    1234"));
// 	printf("ft_atoi: %d\n", ft_atoi("    1234"));

// 	printf("atoi: %d\n", atoi("    +1234"));
// 	printf("ft_atoi: %d\n", ft_atoi("    +1234"));

// 	printf("atoi: %d\n", atoi("    -1234"));
// 	printf("ft_atoi: %d\n", ft_atoi("    -1234"));

// 	printf("atoi: %d\n", atoi("    -+1234"));
// 	printf("ft_atoi: %d\n", ft_atoi("    -+1234"));

// 	printf("atoi: %d\n", atoi("    - 1234"));
// 	printf("ft_atoi: %d\n", ft_atoi("    - 1234"));

// 	printf("atoi: %d\n", atoi("    -123a4"));
// 	printf("ft_atoi: %d\n", ft_atoi("    -123a4"));
// 	return (0); 
// }