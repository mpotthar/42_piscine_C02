/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:36:14 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/29 18:39:11 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	cnt;
	int	isuppercase;

	cnt = 0;
	isuppercase = 1;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] < 65) || (str[cnt] > 90))
		{
			isuppercase = 0;
		}
		cnt++;
	}
	return (isuppercase);
}

// int	main(void)
// {
// 	char	*src;
// 	char	outp;

// 	src = "";
// 	outp = ft_str_is_uppercase(src) + '0';
// 	write(1, &outp, 1);
// 	return (0);
// }
