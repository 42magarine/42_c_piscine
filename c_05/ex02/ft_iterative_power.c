/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:33:48 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 22:44:45 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	nb = 0;
// 	power = 0;
// 	nb = ft_iterative_power(nb, power);
// 	printf("%d\n", nb);
// 	nb = 5;
// 	power = 0;
// 	nb = ft_iterative_power(nb, power);
// 	printf("%d\n", nb);
// 	nb = 6;
// 	power = 1;
// 	nb = ft_iterative_power(nb, power);
// 	printf("%d\n", nb);
// 	nb = 2;
// 	power = 30;
// 	nb = ft_iterative_power(nb, power);
// 	printf("%d\n", nb);
// 	return (0);
// }
