/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:36:16 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/08 12:10:53 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_word(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	cnt;

	cnt = 0;
	if ((str[cnt] >= 97) && (str[cnt] <= 122))
		str[0] -= 32;
	while (str[cnt] != '\0')
	{
		if (ft_word(str[cnt]) == 2 && ft_word(str[cnt - 1]) == 0)
			str[cnt] -= 32;
		else if (ft_word(str[cnt]) == 1 && ft_word(str[cnt - 1]) == 0)
			str[cnt] = str[cnt];
		else if (ft_word(str[cnt]) == 1)
			str[cnt] += 32;
		cnt++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	src[] = "Salut; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(src));
// 	return (0);
// }