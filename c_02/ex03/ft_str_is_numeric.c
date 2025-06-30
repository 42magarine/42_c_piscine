/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:31:20 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 21:28:22 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "0123456789!";
// 	char	str2[] = "0123456789";
// 	char	str3[8];
// 	int		i;

// 	i = ft_str_is_numeric(str1);
// 	printf("%d\n", i);
// 	i = ft_str_is_numeric(str2);
// 	printf("%d\n", i);
// 	i = ft_str_is_numeric(str3);
// 	printf("%d\n", i);
// 	return (0);
// }
