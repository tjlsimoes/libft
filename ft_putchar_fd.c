/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:37:07 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/03/17 11:01:34 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;

// 	fd = open("foo.txt", O_WRONLY | O_CREAT);

// 	ft_putchar_fd('c', fd);
// 	return (0);
// }