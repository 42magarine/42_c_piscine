/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:33:38 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 22:45:11 by mott             ###   ########.fr       */
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

// int	main(void)
// {
// 	int	nb;

// 	nb = 2147483647;
// 	clock_t begin = clock();
// 	nb = ft_is_prime(nb);
// 	clock_t end = clock();
// 	double time_spent = (double)(end - begin);
// 	printf("%f\n", time_spent);
// 	printf("%d\n", nb);
// 	return (0);
// }
