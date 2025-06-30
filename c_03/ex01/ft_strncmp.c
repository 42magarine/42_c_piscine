/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:22:20 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 20:18:39 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "Hello World€";
// 	char	s2[] = "Hello World ";
// 	int		n = 11;
// 	int		i1;
// 	int		i2;

// 	i1 = ft_strncmp(s1, s2, n);
// 	printf("%d\n", i1);

// 	i2 = strncmp(s1, s2, n);
// 	printf("%d\n", i2);
// 	return (0);
// }
