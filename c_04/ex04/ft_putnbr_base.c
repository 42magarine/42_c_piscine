/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:57:10 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 11:12:47 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			a;
	unsigned int	base_size;
	unsigned int	nb;

	base_size = ft_base_check(base);
	if (base_size > 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nb = -nbr;
		}
		else
			nb = nbr;
		if (nb < base_size)
		{
			a = base[nb % base_size];
			write(1, &a, 1);
		}
		else if (nb >= base_size)
		{
			ft_putnbr_base(nb / base_size, base);
			ft_putnbr_base(nb % base_size, base);
		}
	}
}

// int	main(void)
// {
// 	int		nbr;
// 	char	*base;

// 	nbr = -2147483648;
// 	base = "0123456789";
// 	ft_putnbr_base(nbr, base);
// 	write(1, "\n", 1);
// 	base = "01";
// 	ft_putnbr_base(nbr, base);
// 	write(1, "\n", 1);
// 	base = "0123456789ABCDEF";
// 	ft_putnbr_base(nbr, base);
// 	write(1, "\n", 1);
// 	base = "poneyvif";
// 	ft_putnbr_base(nbr, base);
// 	write(1, "\n", 1);
// }
