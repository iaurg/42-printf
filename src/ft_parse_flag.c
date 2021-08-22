/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:55:46 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/21 21:01:58 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_parse_flag(const char *format, va_list ap)
{
	int len;

	len = 0;
	if(*format == 'c')
		len += ft_printf_c(va_arg(ap, int));
	else if(*format == 's')
		len += ft_printf_s(va_arg(ap, char *));
	else if(*format == 'd')
		len += ft_printf_d(va_arg(ap, int));
	else if (*format == '%')
		ft_putchar_fd('%', 1);
	return(len);
}
