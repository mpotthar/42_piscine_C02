/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:07:10 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/09 10:16:01 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] == 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[count] / 16]);
			ft_putchar("0123456789abcdef"[str[count] % 16]);
		}
		else
			ft_putchar(*(str + count));
		count++;
	}	
}

// int	main(void)
// {
// 	char	*src;

// 	src = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(src);
// 	return (0);
// }