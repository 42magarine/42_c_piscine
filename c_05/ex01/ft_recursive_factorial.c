/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:29:43 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 22:44:39 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = -1;
// 	nb = ft_recursive_factorial(nb);
// 	printf("%d\n", nb);
// 	nb = 0;
// 	nb = ft_recursive_factorial(nb);
// 	printf("%d\n", nb);
// 	nb = 4;
// 	nb = ft_recursive_factorial(nb);
// 	printf("%d\n", nb);
// 	nb = 12;
// 	nb = ft_recursive_factorial(nb);
// 	printf("%d\n", nb);
// 	return (0);
// }
