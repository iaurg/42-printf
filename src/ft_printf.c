/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:45:51 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/21 12:11:50 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 The prototype of ft_printf should be int ft_printf(const char *, ...);
• You have to recode the libc’s printf function
• It must not do the buffer management like the real printf
• It will manage the following conversions: cspdiuxX%
• It will be compared with the real printf
• You must use the command ar to create your librairy, using the command libtool
is forbidden.

%c print a single character.
%s print a string of characters.
%p The void * pointer argument is printed in hexadecimal.
%d print a decimal (base 10) number.
%i print an integer in base 10.
%u print an unsigned decimal (base 10) number.
%x print a number in hexadecimal (base 16).
%% print a percent sign.

for more complete references : man 3 printf / man 3 stdarg

int ft_printf(const char *)

malloc, free, write, va_start, va_arg, va_copy, va_end
*/
#include "libftprintf.h"
#include "stdio.h"

// printf returns the number of characters passed to it

/*
Iterate over *type received printing char until found special characters "%", when find this flag. 
Compare next character after "%"" with table "cspdiuxX%"
Special characters needs to match exact same number of extra parameters.
*/

int ft_printf(const char *type, ...)
{

  if (!type)
    return (0);  
  va_list args;
  va_start(args, type);  

  while(*type)
  {
    if(*type == '%')
    {
      printf("special character found\n");
    }
    ft_putchar_fd(*type, 1);
    type++;
  }
  
  return(0);
}
