/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:09:02 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/12 10:24:46 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	write(fd, "\n", 1);
}

// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;

// 	fd = open("foo.txt", O_WRONLY | O_CREAT);
// 	ft_putendl_fd("Hi there!", fd);
// 	return (0);
// }