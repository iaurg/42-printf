/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:55:46 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/21 23:10:40 by itaureli         ###   ########.fr       */
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
	else if(*format == 'p')
		len += ft_printf_p(va_arg(ap, void *));
	else if(*format == 'd')
		len += ft_printf_d(va_arg(ap, int));
	else if(*format == 'i')
		len += ft_printf_i(va_arg(ap, int));
	else if (*format == '%')
		ft_putchar_fd('%', 1);
	return(len);
}
