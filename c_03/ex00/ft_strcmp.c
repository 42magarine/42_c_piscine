/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:21:34 by mott              #+#    #+#             */
/*   Updated: 2023/04/29 20:18:24 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	i = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (i);
}

// int	main(void)
// {
// 	char	s1[] = "Hello World€";
// 	char	s2[] = "Hello World ";
// 	int		i1;
// 	int		i2;

// 	i1 = ft_strcmp(s1, s2);
// 	printf("%d\n", i1);

// 	i2 = strcmp(s1, s2);
// 	printf("%d\n", i1);
// 	return (0);
// }
