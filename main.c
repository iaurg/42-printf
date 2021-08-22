/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:41:35 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/21 20:47:53 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libftprintf.h"
#include "stdio.h"
int main(void)
{
	int printf_return;
	int ft_printf_return;
	// ft_printf("De onde vem você", "7", "8", "9", "10", "11", "12", "13");

	ft_printf_return = ft_printf("De onde %d vem você\n", 66);
	printf_return = printf("De onde %d vem você\n", 66);
	printf("\n");
	printf("Mine: %d \n", ft_printf_return);
	printf("Original: %d \n", printf_return);
	/*
	printf_why = printf("what will be the output?");
	printf_why = printf("\n%d", printf_why);
	printf("\n%d", printf_why);
	*/
	return (0);
}
