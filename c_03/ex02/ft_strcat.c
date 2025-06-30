/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:24:50 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 20:19:50 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
// 	char	s1[20] = "Hello ";
// 	char	s2[] = "World!";
// 	char	s3[20] = "Hello ";
// 	char	s4[] = "World!";

// 	printf("%s\n", ft_strcat(s1, s2));
// 	printf("%s\n", strcat(s3, s4));
// 	return (0);
// }
