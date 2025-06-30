/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:34:34 by mott              #+#    #+#             */
/*   Updated: 2023/05/01 22:38:16 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1 && size > 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char				dest[0];
// 	char				src[] = "Hello World!";
// 	unsigned int		i;

// 	i = ft_strlcpy(dest, src, 0);
// 	printf("%s\n", dest);
// 	printf("%d\n", i);
// 	return (0);
// }
