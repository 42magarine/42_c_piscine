/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:01:49 by mott              #+#    #+#             */
/*   Updated: 2023/04/24 13:46:09 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_output(char n[]);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	n[4];

	n[0] = '0';
	n[1] = '0';
	while (n[0] <= '9')
	{
		while (n[1] <= '9')
		{
			n[2] = n[0];
			n[3] = n[1] + 1;
			while (n[2] <= '9')
			{
				while (n[3] <= '9')
				{
					ft_output(n);
					n[3]++;
				}
				n[2]++;
				n[3] = '0';
			}
			n[1]++;
		}
		n[0]++;
		n[1] = '0';
	}
}

void	ft_output(char n[])
{
	ft_putchar(n[0]);
	ft_putchar(n[1]);
	ft_putchar(' ');
	ft_putchar(n[2]);
	ft_putchar(n[3]);
	if (!(n[0] == '9' && n[1] == '8' && n[2] == '9' && n[3] == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
