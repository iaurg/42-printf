/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:45:51 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/23 21:41:53 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_navigate(const char *format, va_list ap)
{
	int	len;

	if (!format)
		return (0);
	len = 0;
	while (*format)
	{
		if (*format == '%' && ft_strchr("cspdiuxX%", format[1]))
			len += ft_parse_flag(++format, ap);
		else
		{
			ft_putchar_fd(*format, 1);
			len++;
		}
		format++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		len;

	if (!format)
		return (0);
	va_start(list, format);
	len = ft_navigate(format, list);
	va_end(list);
	return (len);
}

/*
 The prototype of ft_printf should be int ft_printf(const char *, ...);
• You have to recode the libc’s printf function
• It must not do the buffer management like the real printf
• It will manage the following conversions: cspdiuxX%
• It will be compared with the real printf
• You must use the command ar to create your librairy, using the command libtool
is forbidden.

%c print a single character. - OK
%s print a string of characters. - OK
%p The void * pointer argument is printed in hexadecimal. - OK
%d print a decimal (base 10) number. - OK
%i print an integer in base 10. - OK
%u print an unsigned decimal (base 10) number.
%x print a number in hexadecimal (base 16). - OK
%X print a number in hexadecimal uppercase (base 16).
%% print a percent sign. - OK

for more complete references : man 3 printf / man 3 stdarg

int ft_printf(const char *)

malloc, free, write, va_start, va_arg, va_copy, va_end

printf returns the number of characters passed to it

Iterate over *format received printing char until found special characters "%",
when find this flag.
Compare next character after "%"" with table "cspdiuxX%"
Special characters needs to match exact same number of extra parameters.
*/
