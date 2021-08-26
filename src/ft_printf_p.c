/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 22:36:38 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/25 21:38:23 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "stdio.h"
/*
The actual data type of the value of all pointers, whether integer, float,
character, or otherwise, is the same, a long hexadecimal number that represents
a memory address. The only difference between pointers of different data types
is the data type of the variable or constant that the pointer points to.
*/

static	size_t	hex_size(size_t number)
{
	size_t	size;

	size = 0;
	if (number == 0)
		return (1);
	while (number)
	{
		number = number / 16;
		size++;
	}
	return (size);
}

int	ft_printf_p(size_t number)
{
	int		iterator;
	int		remainder;
	char	*hex_table;
	size_t	size;

	size = hex_size(number);
	hex_table = malloc((size + 3) * sizeof(char));
	if (!hex_table)
		return (0);
	iterator = size;
	hex_table[0] = '0';
	hex_table[1] = 'x';
	while (iterator)
	{
		remainder = number % 16;
		if (remainder < 10)
			hex_table[--iterator + 2] = 48 + remainder;
		else
			hex_table[--iterator + 2] = 87 + remainder;
		number = number / 16;
	}
	write(1, hex_table, size + 2);
	free(hex_table);
	return (size + 2);
}
