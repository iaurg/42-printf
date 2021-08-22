/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:41:03 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/21 20:47:13 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf_d(int number)
{
	char	*str;
	str = ft_itoa(number);
	ft_putstr_fd(str, 1);
	return(ft_strlen(str));
}
