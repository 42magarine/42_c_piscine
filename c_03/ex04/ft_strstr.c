/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:26:55 by mott              #+#    #+#             */
/*   Updated: 2023/05/01 18:14:27 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = i;
		k = 0;
		while (str[j] == to_find[k] && to_find[k] != '\0')
		{
			j++;
			k++;
		}
		if (to_find[k] == '\0')
			return (&str[i]);
		else
			i++;
	}
	return (0);
}

// int	main()
// {
// 	char	largestring[] = "Foo Bar Baz";
// 	char	smallstring[] = "Bar";
// 	char	*ptr;

// 	char	largestring2[] = "Foo Bar Baz";
// 	char	smallstring2[] = "Bar";
// 	char	*ptr2;

// 	ptr = ft_strstr(largestring, smallstring);
// 	printf("%s\n", ptr);

// 	ptr2 = strstr(largestring2, smallstring2);
// 	printf("%s\n", ptr);
// }
