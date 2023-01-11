/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:40:42 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/08 11:06:16 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] < 32) || (str[cnt] == 127))
		{
			return (0);
		}
		cnt++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*src;
// 	char	outp;

// 	src = "abc123xyz 789ABCXYZ";
// 	outp = ft_str_is_printable(src) + '0';
// 	write(1, &outp, 1);
// }
