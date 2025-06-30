/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:15:09 by mott              #+#    #+#             */
/*   Updated: 2023/04/24 13:45:36 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_output(char n[]);
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	while (n[0] <= '7')
	{
		while (n[1] <= '8')
		{
			while (n[2] <= '9')
			{
				ft_output(n);
				n[2]++;
			}
		n[1]++;
		n[2] = n[1] + 1;
		}
	n[0]++;
	n[1] = n[0] + 1;
	n[2] = n[1] + 1;
	}
}

void	ft_output(char n[])
{
	ft_putchar(n[0]);
	ft_putchar(n[1]);
	ft_putchar(n[2]);
	if (!(n[0] == '7' && n[1] == '8' && n[2] == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
