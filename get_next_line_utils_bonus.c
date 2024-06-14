/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:19:38 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/14 13:24:28 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	idx_line_break(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strcpy(char *str, char *s, int start)
{
	int		i;

	i = start;
	if (s)
	{
		while (s[i - start] != '\0')
		{
			str[i] = s[i - start];
			i++;
		}
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	s1_len;
	int		i;

	s1_len = ft_strlen(s1);
	str = (char *)malloc(s1_len + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	i = ft_strcpy(str, (char *)s1, i);
	i = ft_strcpy(str, (char *)s2, s1_len);
	str[i] = '\0';
	if (s1_len > 0)
		free(s1);
	return (str);
}
