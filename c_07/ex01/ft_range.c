/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:45:49 by mott              #+#    #+#             */
/*   Updated: 2023/05/09 20:57:43 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array_of_ints;
	int	i;

	if (min >= max)
		return (NULL);
	array_of_ints = malloc(sizeof(int) * (max - min));
	if (array_of_ints == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		array_of_ints[i] = min + i;
		i++;
	}
	return (array_of_ints);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*array_of_ints;
// 	int	i;

// 	min = 1;
// 	max = 8;
// 	array_of_ints = ft_range(min, max);
// 	i = 0;
// 	while (min + i < max)
// 	{
// 		printf("%d ", array_of_ints[i]);
// 		i++;
// 	}
// 	return (0);
// }
