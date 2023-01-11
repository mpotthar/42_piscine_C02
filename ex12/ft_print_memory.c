/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:46:26 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/09 11:01:17 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_str_is_printable(unsigned char *str)
{
	char	*arr;

	arr = "0123456789abcdef";
	write(1, &(arr[(*str / 16)]), 1);
	write(1, &(arr[(*str % 16)]), 1);
}

void	ft_first(unsigned long nbr)
{
	char	arr[16];
	char	*hex;
	int		counter;
	int		digits;
	int		divisor;

	hex = "0123456789abcdef";
	digits = 0;
	divisor = 1;
	counter = 16;
	while (counter-- > 0)
	{
		if (counter > 0)
		{
			arr[counter] = hex[nbr % 16];
			nbr /= 16;
		}
		else
			arr[counter] = '0';
	}
	write(1, arr, 16);
	write(1, ": ", 2);
}

void	ft_second(void *addr, unsigned int size, unsigned int offset)
{
	unsigned int	counter;
	int				cnt;

	counter = 0;
	while ((counter + offset) < size && counter < 16)
	{
		ft_str_is_printable(addr + counter + offset);
		if (counter % 2 == 1)
			write(1, " ", 1);
		counter++;
	}
	cnt = (2 * counter) + (counter / 2);
	while (cnt < 40)
	{
		write(1, " ", 1);
		cnt++;
	}
}

void	ft_third(void *addr, unsigned int size, unsigned int offset)
{
	unsigned int	counter;
	char			*str;

	counter = 0;
	while ((counter + offset) < size && counter < 16)
	{
		str = addr + counter + offset;
		if (!(*str >= 32 && *str <= 126) || *str == 127)
			write(1, ".", 1);
		else
			write(1, &*str, 1);
	counter++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	offset;
	unsigned int	limit;
	unsigned int	counter;

	offset = 0;
	counter = 0;
	limit = (size / 16);
	if ((size) % 16 != 0)
		limit++;
	if (size == 0)
		return (addr);
	while (counter < limit)
	{
		ft_first((unsigned long)addr + offset);
		ft_second(addr, size, offset);
		ft_third(addr, size, offset);
		write(1, "\n", 1);
		counter++;
		offset += 16;
	}
	return (addr);
}

// int	main(void)
// {
// 	unsigned int	size;
// 	char			src[] = "Hello";

// 	size = 5;
// 	ft_print_memory(src, size);
// }