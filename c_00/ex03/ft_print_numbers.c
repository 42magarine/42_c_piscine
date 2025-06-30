/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 21:11:04 by mott              #+#    #+#             */
/*   Updated: 2023/04/24 13:44:10 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		ft_putchar(d);
		d++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
