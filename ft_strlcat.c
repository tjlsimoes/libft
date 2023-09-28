/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjlsimoes <tjlsimoes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:27:15 by tjlsimoes         #+#    #+#             */
/*   Updated: 2023/09/28 15:38:22 by tjlsimoes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		len_dst;
	int		len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	while(src[i] != '\0' && i < size - len_dst - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (len_dst + len_src > size)
		return (size);
	return (len_dst + len_src);
}

// Not tested...