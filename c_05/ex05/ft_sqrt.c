/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:33:41 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 22:45:05 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <time.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 2147395600;
// 	clock_t begin = clock();
// 	nb = ft_sqrt(nb);
// 	clock_t end = clock();
// 	double time_spent = (double)(end - begin);
// 	printf("%f\n", time_spent);
// 	printf("%d\n", nb);
// 	return (0);
// }
