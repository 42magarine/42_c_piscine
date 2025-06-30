/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:32:51 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 21:28:43 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1 = 10;
// 	char	str2[] = "Hello World!";
// 	char	str3[8];
// 	int		i;

// 	i = ft_str_is_printable(&str1);
// 	printf("%d\n", i);
// 	i = ft_str_is_printable(str2);
// 	printf("%d\n", i);
// 	i = ft_str_is_printable(str3);
// 	printf("%d\n", i);
// 	return (0);
// }
