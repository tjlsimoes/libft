/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:47:43 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/05/31 10:29:29 by tjorge-l         ###   ########.fr       */
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

static int	power(int n, int power)
{
	int		result;

	result = 1;
	if (power == 0)
		return (1);
	while (power)
	{
		result *= n;
		power--;
	}
	return (result);
}

static void	ft_putstr_fd_alt(char *s, int fd)
{
	int	i;

	if (!s || !fd || fd < 0)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		nbr_digits;

	if (n == -2147483648)
		return (ft_putstr_fd_alt("-2147483648", fd));
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	nbr_digits = get_nbr_digits(n);
	while (nbr_digits > 0)
	{
		c = (n / power(10, nbr_digits - 1)) + 48;
		write(fd, &c, 1);
		n = n % power(10, nbr_digits - 1);
		nbr_digits--;
	}
}

// 1234567
// 10^6 * 1
// 10^5 * 2
// 10^4 * 3
// 10^3 * 4
// 10^2 * 5
// 10^1 * 6
// 10^0 * 7

// #include <stdio.h>
// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;

// 	fd = open("foo.txt", O_WRONLY | O_CREAT);
// 	// ft_putnbr_fd(1234567, fd);
// 	// ft_putnbr_fd(-1234567, fd);
// 	// ft_putnbr_fd(2147483647, fd);
// 	ft_putnbr_fd(-2147483648, fd);

// 	return (0);
// }
