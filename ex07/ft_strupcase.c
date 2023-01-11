/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:48:34 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/08 11:10:48 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] >= 'a') && (str[cnt] <= 'z'))
		{
			str[cnt] -= 32;
		}
		cnt++;
	}
	return (str);
}

/* int	main()
{
	char	src[] = "8hello";
	
	printf("%s", ft_strupcase(src));
	return (0);
} */