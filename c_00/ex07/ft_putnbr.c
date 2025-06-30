/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:40:32 by mott              #+#    #+#             */
/*   Updated: 2023/04/24 13:46:27 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		ft_negative(int nb);
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	i;
	int	a[10];

	if (nb < 0)
	{
		nb = ft_negative(nb);
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	i = 0;
	while (nb > 0)
	{
		a[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(a[i]);
	}
}

int	ft_negative(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (nb);
	}
	else
	{
		ft_putchar('-');
		nb = -nb;
		return (nb);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
