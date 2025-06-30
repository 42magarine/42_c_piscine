/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:06 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 21:28:07 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char			dest[] = "Hello ABCDE! World!";
// 	char			src[] = "Hello World!";
// 	unsigned int	i;

// 	i = 20;
// 	printf("%s\n", dest);
// 	*dest = *ft_strncpy(dest, src, i);
// 	printf("%s\n", dest);
// 	return (0);
// }
