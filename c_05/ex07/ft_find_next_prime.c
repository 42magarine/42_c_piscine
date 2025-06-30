/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:33:34 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 22:45:17 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <time.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 2147483030;
// 	clock_t begin = clock();
// 	nb = ft_find_next_prime(nb);
// 	clock_t end = clock();
// 	double time_spent = (double)(end - begin);
// 	printf("%f\n", time_spent);
// 	printf("%d\n", nb);
// 	return (0);
// }
