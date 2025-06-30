/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:57:53 by mott              #+#    #+#             */
/*   Updated: 2023/05/04 12:36:22 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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

int	ft_str_start(char *str, int *ptr_to_i)
{
	int	sign;
	int	i;

	sign = 1;
	i = *ptr_to_i;
	while (str[i] != '\0'
		&& (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	*ptr_to_i = i;
	return (sign);
}

double	ft_atoi_cal(char *str, char *base, int *ptr_to_i, int base_size)
{
	int		i;
	int		j;
	double	nb;
	int		stop;

	i = *ptr_to_i;
	nb = 0;
	stop = 0;
	while (str[i] != '\0' && stop == 0)
	{
		j = 0;
		stop = 1;
		while (base[j] != '\0')
		{
			if (str[i] == base [j])
			{
				nb = nb * base_size + j;
				stop = 0;
			}
			j++;
		}
		i++;
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		*ptr_to_i;
	int		base_size;
	int		sign;
	double	nb;

	i = 0;
	ptr_to_i = &i;
	base_size = ft_base_check(base);
	if (base_size < 2)
		return (0);
	sign = ft_str_start(str, ptr_to_i);
	nb = ft_atoi_cal(str, base, ptr_to_i, base_size);
	if (sign * nb > 2147483647 || sign * nb < -2147483648)
		return (0);
	else
		return (sign * nb);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*base;
// 	double	i;

// 	str = "  ++--opopoxyz12Ap";
// 	base = "0123456789";
// 	i = ft_atoi_base(str, base);
// 	printf("%.10g\n", i);
// 	base = "01";
// 	i = ft_atoi_base(str, base);
// 	printf("%.10g\n", i);
// 	base = "0123456789ABCDEF";
// 	i = ft_atoi_base(str, base);
// 	printf("%.10g\n", i);
// 	base = "poneyvif";
// 	i = ft_atoi_base(str, base);
// 	printf("%.10g\n", i);
// }
