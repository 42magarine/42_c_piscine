/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:45:46 by mott              #+#    #+#             */
/*   Updated: 2023/05/09 20:58:29 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	size;
// 	int	*array_of_ints;
// 	int	i;

// 	min = 2;
// 	max = 9;
// 	size = ft_ultimate_range(&array_of_ints, min, max);
// 	i = 0;
// 	while (min + i < max)
// 	{
// 		printf("%d ", array_of_ints[i]);
// 		i++;
// 	}
// 	printf("\n%d\n", size);
// 	return (0);
// }
