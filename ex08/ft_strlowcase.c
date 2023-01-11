/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:33:01 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/08 11:59:26 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] >= 65) && (str[cnt] <= 90))
		{
			str[cnt] += 32;
		}
		cnt++;
	}
	return (str);
}

/* int	main()
{
	char	src[] = "Hello";
	
	printf("%s", ft_strlowcase(src));
	return (0);
} */