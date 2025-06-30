/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:29:02 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 22:44:33 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else
	{
		i = nb - 1;
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
}

// int	main(void)
// {
// 	int	nb;

// 	nb = -1;
// 	nb = ft_iterative_factorial(nb);
// 	printf("%d\n", nb);
// 	nb = 0;
// 	nb = ft_iterative_factorial(nb);
// 	printf("%d\n", nb);
// 	nb = 4;
// 	nb = ft_iterative_factorial(nb);
// 	printf("%d\n", nb);
// 	nb = 12;
// 	nb = ft_iterative_factorial(nb);
// 	printf("%d\n", nb);
// 	return (0);
// }
