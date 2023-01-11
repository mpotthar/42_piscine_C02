/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:45:35 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/29 12:54:42 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	cnt;
	int	islowercase;

	cnt = 0;
	islowercase = 1;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] < 97) || (str[cnt] > 122))
		{
			islowercase = 0;
		}
		cnt++;
	}
	return (islowercase);
}

// int	main(void)
// {
// 	char	*src;
// 	char	outp;

// 	src = "abc";
// 	outp = ft_str_is_lowercase(src) + '0';
// 	write(1, &outp, 1);
// 	return (0);
// }
