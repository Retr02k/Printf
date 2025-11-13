/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:04:23 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/13 21:45:06 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...)
{
	int i;
	int print;
	va_list	arg;
	
	va_start(arg,s);
	i = 0;
	print = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			print = ft_printf_rules(s[i + 1], arg);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			print++;
		}
		i++;
	}
	va_end(arg);
	return (print);
}

int ft_printf_rules(const char flag, va_list arg)
{
	int	print;

	print = 0;
	if (flag == 'c')
		print += ft_putchar_fd(va_arg(arg, int), 1);
	else if (flag == 's')
		print += ft_putstr_fd(va_arg(arg,char), 1);
	else if (flag == 'p')
		print += putnbr_base(va_arg(arg,int), "0123456789abcdef");
	else if (flag == 'd')
		print += ;
	else if (flag == 'i')
		print += ;
	else if (flag == 'u')
		print += ;
	else if (flag == 'x')
		print += ;
	else if (flag == 'X')
		print += ;
	else if (flag == '%')
		print += ;
	return (print);
}
