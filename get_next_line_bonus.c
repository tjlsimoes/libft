/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:20:02 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/09/23 11:29:30 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	update_end(int *end, int b, char const *s)
{
	*end = b;
	while (s[*end])
		*end = *end + 1;
}

static char	*get_substring(char const *s, int b, int end, int remains)
{
	int		i;
	char	*substring;

	if (!s || (b == 0 && remains))
		return (NULL);
	if (end == -1)
		update_end(&end, b, s);
	substring = (char *)ft_calloc((end - b) + 2, sizeof(char));
	if (!substring)
		return (NULL);
	i = 0;
	while (b + i <= end && s[b + i])
	{
		substring[i] = s[b + i];
		i++;
	}
	substring[i] = '\0';
	if (substring[0] == '\0')
	{
		free(substring);
		return (NULL);
	}
	return (substring);
}

void	*free_null_rt(char *buffer)
{
	free(buffer);
	return (NULL);
}

char	*str_with_lb_eof(int fd, char *str)
{
	char	*buffer;
	int		chars_read;

	buffer = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	chars_read = 5;
	while (idx_line_break(str) == -1 && chars_read)
	{
		chars_read = read(fd, buffer, BUFFER_SIZE);
		if (!chars_read)
			break ;
		if (chars_read < 0)
			return (free_null_rt(buffer));
		buffer[chars_read] = '\0';
		if (!str)
			str = ft_strjoin("", buffer);
		else
			str = ft_strjoin(str, buffer);
		if (!str)
			return (free_null_rt(buffer));
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*mem[FD_MAX];
	char		*remains;
	char		*str_til_lb_eof;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	mem[fd - 3] = str_with_lb_eof(fd, mem[fd - 3]);
	if (!mem[fd - 3])
		return (NULL);
	remains = get_substring(mem[fd - 3],
			idx_line_break(mem[fd - 3]) + 1, -1, 1);
	str_til_lb_eof = get_substring(mem[fd - 3],
			0, idx_line_break(mem[fd - 3]), 0);
	free(mem[fd - 3]);
	mem[fd - 3] = remains;
	return (str_til_lb_eof);
}

// Bonus:

// Single file descriptor

// int	main(void)
// {
// 	int		fd;
// 	char	*output;
// 	int		i;

// 	fd = open("foo_i.txt", O_RDONLY);
// 	i = 0;
// 	// while((output = get_next_line(fd)))
// 	// {
// 	// 	printf("%s", output);
// 	// 	free(output);
// 	// 	output = NULL;
// 	// 	i++;
// 	// }
// 	while (i < 6)
// 	{
// 		output = get_next_line(fd);
// 		if (output)
// 		{
// 			printf("%s", output);
// 			free(output);
// 		}
// 		if (!output)
// 			printf("NULL\n");
// 		i++;
// 	}
// 	// output = get_next_line(fd);
// 	// if (output)
// 	// {
// 	// 	printf("%s", output);
// 	// 	free(output);
// 	// }
// 	// if (!output)
// 	// 	printf("NULL\n");
// 	close(fd);
// 	// char buffer[BUFFER_SIZE];
// 	// int bytes_read = read(fd, buffer, BUFFER_SIZE);
// 	// printf("Bytes read: %d\n", bytes_read);
// 	// printf("Contentes buffer: %s\n", buffer);
// 	return (0);
// }

// Multi file descriptors
// #include <fcntl.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int		fd_a;
// 	int		fd_b;
// 	char	*output;

// 	fd_a = open("foo_g.txt", O_RDONLY);
// 	fd_b = open("foo_i.txt", O_RDONLY);

// 	while ((output = get_next_line(fd_a)) != NULL)
// 	{
// 		printf("%s\n", output);
// 		free(output);
// 	}
// 	while ((output = get_next_line(fd_b)) != NULL)
// 	{
// 		printf("%s\n", output);
// 		free(output);
// 	}
// 	close(fd_a);
// 	close(fd_b);
// 	return (0);
// }
