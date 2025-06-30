/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:45:36 by mott              #+#    #+#             */
/*   Updated: 2023/05/10 21:42:37 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_charset_test(char c, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (c == to_find[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen2(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_charset_test(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_str_counter(char *str, char *charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && ft_charset_test(str[i], charset) == 1)
			i++;
		while (str[i] && ft_charset_test(str[i], charset) == 0)
			i++;
		while (str[i] && ft_charset_test(str[i], charset) == 1)
			i++;
		counter++;
	}
	return (counter);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	split = malloc(sizeof(char *) * (ft_str_counter(str, charset) + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && ft_charset_test(str[i], charset) == 1)
			i++;
		split[j] = malloc(sizeof(char) * ft_strlen2(&str[i], charset) + 1);
		k = 0;
		while (str[i] && ft_charset_test(str[i], charset) == 0)
		{
			split[j][k] = str[i];
			i++;
			k++;
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	**split;
// 	int		counter;
// 	int		i;

// 	str = "_   test u_tests u_u as?!gosuhg_sd u wt5634532";
// 	charset = "_ t";
// 	counter = ft_str_counter(str, charset);
// 	split = ft_split(str, charset);
// 	i = 0;
// 	while (i < counter)
// 	{
// 		printf("%s\n", (split[i]));
// 		i++;
// 	}
// 	return (0);
// }
