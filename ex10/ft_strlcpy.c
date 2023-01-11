/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:44:28 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/09 10:49:34 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	cpy;

	cnt = 0;
	cpy = 0;
	while (src[cnt] != '\0')
	{
		cnt++;
	}
	if (size != 0)
	{
		while (src[cpy] != '\0' && cpy < (size - 1))
		{
			dest[cpy] = src[cpy];
			cpy++;
		}
		dest[cpy] = '\0';
	}
	return (cnt);
}

// int	main()
// {
// 	char	src[] = "Hall1o";
// 	char	dest[4];
// 	int	size = 4;
// 	printf("%u", ft_strlcpy(dest, src, size));
// 	return (0);
// }