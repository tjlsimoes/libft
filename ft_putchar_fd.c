/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:47:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/05/31 10:31:55 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!fd || fd < 0)
		return ;
	write(fd, &c, 1);
}

// #include <fcntl.h>

// int	main(void)
// {
// 	// int	fd;

// 	// fd = open("foo.txt", O_WRONLY | O_CREAT);

// 	ft_putchar_fd('c', -50);
// 	return (0);
// }