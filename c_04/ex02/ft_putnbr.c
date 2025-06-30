/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:56:09 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 10:07:57 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10 && nb >= 0)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

// int	main(void)
// {
// 	int	a = -2147483648;
// 	int	b = -4;
// 	int	c = 0;
// 	int	d = 2147483647;

// 	ft_putnbr(a);
// 	write(1, "\n", 1);
// 	ft_putnbr(b);
// 	write(1, "\n", 1);
// 	ft_putnbr(c);
// 	write(1, "\n", 1);
// 	ft_putnbr(d);
// 	write(1, "\n", 1);
// }
