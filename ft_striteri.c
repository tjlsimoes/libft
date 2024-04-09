/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:34 by tjlsimoes         #+#    #+#             */
/*   Updated: 2024/04/08 15:52:19 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	ft_toupper_alt(unsigned int, char *c)
// {
// 	if (97 <= *c && *c <= 122)
// 		*c -= 32;
// }

// int	main(void)
// {
// 	// char	str[6] = "hello";
// 	char	str[6] = "he4lo";

// 	ft_striteri(str, ft_toupper_alt);
// 	printf("%s\n", str);
// 	return (0);
// }