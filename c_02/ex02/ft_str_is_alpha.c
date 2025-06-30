/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:43 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 21:28:15 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "HelloWorld";
// 	char	str3[8];
// 	int		i;

// 	i = ft_str_is_alpha(str1);
// 	printf("%d\n", i);
// 	i = ft_str_is_alpha(str2);
// 	printf("%d\n", i);
// 	i = ft_str_is_alpha(str3);
// 	printf("%d\n", i);
// 	return (0);
// }
