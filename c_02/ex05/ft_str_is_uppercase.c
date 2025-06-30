/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:32:20 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 21:28:36 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "HELLOWORLD";
// 	char	str2[] = "HelloWorld";
// 	char	str3[8];
// 	int		i;

// 	i = ft_str_is_uppercase(str1);
// 	printf("%d\n", i);
// 	i = ft_str_is_uppercase(str2);
// 	printf("%d\n", i);
// 	i = ft_str_is_uppercase(str3);
// 	printf("%d\n", i);
// 	return (0);
// }
