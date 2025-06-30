/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:45:40 by mott              #+#    #+#             */
/*   Updated: 2023/05/10 20:39:16 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_whitespaces(char *str);
int	ft_sign(char *str);

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
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

long	ft_atoi_base(char *nbr, char *base_from, int base_from_length)
{
	int		i;
	int		j;
	long	int_nbr;

	int_nbr = 0;
	i = ft_whitespaces(nbr);
	while (nbr[i] != '\0')
	{
		j = 0;
		while (nbr[i] != base_from[j] && base_from[j] != '\0')
			j++;
		if (nbr[i] == base_from[j])
			int_nbr = int_nbr * base_from_length + j;
		else
			return (int_nbr);
		i++;
	}
	return (int_nbr);
}

int	ft_str_length(long int_nbr, int base_to_length)
{
	int	i;

	i = 1;
	while (int_nbr >= base_to_length)
	{
		int_nbr = int_nbr / base_to_length;
		i++;
	}
	return (i);
}

char	*ft_itoa(char *nbr, long int_nbr, char *base_to, int base_to_length)
{
	char	*new_nbr;
	int		str_length;
	int		sign;

	str_length = ft_str_length(int_nbr, base_to_length);
	sign = ft_sign(nbr);
	if (sign == -1)
		str_length++;
	new_nbr = malloc(sizeof(char) * (str_length + 1));
	if (new_nbr == NULL)
		return (NULL);
	if (sign == -1)
		new_nbr[0] = '-';
	while (int_nbr > 0)
	{
		str_length--;
		new_nbr[str_length] = base_to[int_nbr % base_to_length];
		int_nbr = int_nbr / base_to_length;
	}
	return (new_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_from_length;
	int		base_to_length;
	long	int_nbr;
	char	*new_nbr;

	base_from_length = ft_base_check(base_from);
	base_to_length = ft_base_check(base_to);
	if (base_from_length < 2 || base_to_length < 2)
		return (NULL);
	int_nbr = ft_atoi_base(nbr, base_from, base_from_length);
	new_nbr = ft_itoa(nbr, int_nbr, base_to, base_to_length);
	return (new_nbr);
}

// int	main(void)
// {
// 	char	*nbr;
// 	char	*base_from;
// 	char	*base_to;

// 	nbr = " \t \n \v \f \r +---80000000-+7fffffff+bc";
// 	base_from = "0123456789abcdef";
// 	base_to = "0123456789";
// 	nbr = ft_convert_base(nbr, base_from, base_to);
// 	printf("%s\n", nbr);
// 	return (0);
// }
