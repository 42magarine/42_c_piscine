/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:33:43 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 22:44:58 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		i = ft_fibonacci(index -1) + ft_fibonacci(index -2);
	return (i);
}

// int	main(void)
// {
// 	int	i;

// 	i = -1;
// 	i = ft_fibonacci(i);
// 	printf("-1: %d\n", i);
// 	i = 0;
// 	i = ft_fibonacci(i);
// 	printf("0: %d\n", i);
// 	i = 1;
// 	i = ft_fibonacci(i);
// 	printf("1: %d\n", i);
// 	i = 2;
// 	i = ft_fibonacci(i);
// 	printf("2: %d\n", i);
// 	i = 3;
// 	i = ft_fibonacci(i);
// 	printf("3: %d\n", i);
// 	i = 4;
// 	i = ft_fibonacci(i);
// 	printf("4: %d\n", i);
// 	i = 5;
// 	i = ft_fibonacci(i);
// 	printf("5: %d\n", i);
// 	i = 6;
// 	i = ft_fibonacci(i);
// 	printf("6: %d\n", i);
// 	i = 7;
// 	i = ft_fibonacci(i);
// 	printf("7: %d\n", i);
// 	i = 8;
// 	i = ft_fibonacci(i);
// 	printf("8: %d\n", i);
// 	i = 9;
// 	i = ft_fibonacci(i);
// 	printf("9: %d\n", i);
// 	i = 35;
// 	i = ft_fibonacci(i);
// 	printf("10: %d\n", i);
// }
