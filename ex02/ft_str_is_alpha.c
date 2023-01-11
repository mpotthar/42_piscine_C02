/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:41:08 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/29 12:13:52 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	cnt;
	int	isalpha;

	cnt = 0;
	isalpha = 1;
	while (str[cnt] != '\0')
	{
		if (str[cnt] < 65 || (str[cnt] > 90 && str[cnt] < 97) || str[cnt] > 122)
		{
			isalpha = 0;
		}
		cnt++;
	}
	return (isalpha);
}

// int	main(void)
// {
// 	char			*src;

// 	src = "abcdefghiRSTUVWXYZ";

//     char outp;

//     outp = ft_str_is_alpha(src) + '0';
// 	write(1, &outp, 1);
// 	return (0);
// }
