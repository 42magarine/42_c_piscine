/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:25:28 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 20:18:57 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char				s1[20] = "Hello ";
// 	char				s2[] = "World!";
// 	char				s3[20] = "Hello ";
// 	char				s4[] = "World!";
// 	unsigned int		nb = 5;

// 	printf("%s\n", ft_strncat(s1, s2, nb));
// 	printf("%s\n", strncat(s3, s4, nb));
// 	return (0);
// }
