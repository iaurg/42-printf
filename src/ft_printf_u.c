/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:43:49 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/22 22:49:16 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_u(unsigned int number)
{
	char	*str;
	int		len;
	if (number < 0)
		number = -number;
	// itoa just solve integer hehe, I need another approach...
	str = ft_itoa(number);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return(len);
}
