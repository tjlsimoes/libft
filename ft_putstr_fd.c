/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:46:31 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/12 10:25:13 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;

// 	fd = open("foo.txt", O_WRONLY | O_CREAT);
// 	ft_putstr_fd("hello", fd);
// 	return (0);
// }