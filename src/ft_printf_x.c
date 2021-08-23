/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:07:53 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/22 22:19:15 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	size_t	hex_size(unsigned int number)
{
	size_t size;

	size = 0;
	if (number == 0)
		return (1);
	while(number)
	{
		number = number / 16;
		size++;
	}
	return size;
}

static char	*convert_to_hex(unsigned int number)
{
	int		iterator;
	int		remainder;
	char	*hex_table;
	size_t	size;

	size = hex_size(number);
	hex_table = malloc(size * sizeof(char));
	if(!hex_table)
		return (NULL);
	iterator = size;
	while(iterator)
	{
		remainder = number % 16;
		if (remainder < 10)
			hex_table[--iterator] = 48 + remainder;
		else
			hex_table[--iterator] = 87 + remainder;
		number = number / 16;
	}
	return(hex_table);
}

int	ft_printf_x(unsigned int number)
{
	int		len;
	char	*hex;

	hex = convert_to_hex(number);
	len = ft_strlen(hex);
	ft_putstr_fd(hex, 1);
	free(hex);
	return(len);
}
