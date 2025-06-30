/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:33:46 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 22:44:50 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	nb = 0;
// 	power = 0;
// 	nb = ft_recursive_power(nb, power);
// 	printf("%d\n", nb);
// 	nb = 5;
// 	power = 0;
// 	nb = ft_recursive_power(nb, power);
// 	printf("%d\n", nb);
// 	nb = 6;
// 	power = 1;
// 	nb = ft_recursive_power(nb, power);
// 	printf("%d\n", nb);
// 	nb = 2;
// 	power = 30;
// 	nb = ft_recursive_power(nb, power);
// 	printf("%d\n", nb);
// 	return (0);
// }
