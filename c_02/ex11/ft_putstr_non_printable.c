/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:35:02 by mott              #+#    #+#             */
/*   Updated: 2023/05/02 14:38:00 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] < ' ') || str[i] > '~')
		{
			write(1, "\\", 1);
			write(1, &base[str[i] / 16], 1);
			write(1, &base[str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Coucou\ntu väs bien ?";

// 	ft_putstr_non_printable(str);
// 	return (0);
// }
