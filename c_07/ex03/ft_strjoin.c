/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:45:43 by mott              #+#    #+#             */
/*   Updated: 2023/05/10 20:32:47 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			total_len++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	return (total_len + (i * (size - 1)));
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		i;
	int		total_length;

	if (size <= 0)
	{
		strjoin = malloc(sizeof(char) * 1);
		strjoin[0] = '\0';
		return (strjoin);
	}
	total_length = ft_total_len(size, strs, sep);
	strjoin = malloc(sizeof(char) * (total_length + 1));
	if (strjoin == NULL)
		return (NULL);
	strjoin[0] = '\0';
	i = 0;
	while (i < size)
	{
		strjoin = ft_strcat(strjoin, strs[i]);
		if (i < size - 1)
			strjoin = ft_strcat(strjoin, sep);
		i++;
	}
	strjoin[total_length] = '\0';
	return (strjoin);
}

// int	main(void)
// {
// 	int		size;
// 	char	*strs[5];
// 	char	*sep;
// 	char	*strjoin;

// 	size = 5;
// 	strs[0] = "hello";
// 	strs[1] = "world";
// 	strs[2] = "how";
// 	strs[3] = "are";
// 	strs[4] = "you";
// 	sep = " ? ";
// 	strjoin = ft_strjoin(size, strs, sep);
// 	printf("%s", strjoin);
// 	return (0);
// }
