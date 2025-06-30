/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:27:29 by mott              #+#    #+#             */
/*   Updated: 2023/05/02 12:42:56 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = dest_len;
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && i < (size - dest_len - 1))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char			s1[20] = "Hello ";
// 	char			s2[] = "Woooooooooooorld!";
// 	unsigned int	size1 = 20;
// 	unsigned int	size2 = 0;

// 	char			s3[20] = "Hello ";
// 	char			s4[] = "Woooooooooooorld!";
// 	unsigned int	size3 = 20;
// 	unsigned int	size4 = 0;

// 	size2 = ft_strlcat(s1, s2, size1);
// 	printf("%s\n", s1);
// 	printf("%d\n", size2);

// 	size4 = strlcat(s3, s4, size3);
// 	printf("%s\n", s3);
// 	printf("%d\n", size4);
// 	return (0);
// }
