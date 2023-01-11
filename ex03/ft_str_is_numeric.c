/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:14:59 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/29 12:24:52 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	cnt;
	int	isnum;

	cnt = 0;
	isnum = 1;
	while (str[cnt] != '\0')
	{
		if (str[cnt] < 48 || str[cnt] > 57)
		{
			isnum = 0;
		}
		cnt++;
	}
	return (isnum);
}

// int	main(void)
// {
// 	char			*src;

// 	src = "123";

//     char outp;

//     outp = ft_str_is_numeric(src) + '0';
// 	write(1, &outp, 1);
// 	return (0);
// }
