/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:04:23 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/14 19:14:32 by psilva-p         ###   ########.fr       */
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
			print += ft_printf_rules(s[i + 1], arg);
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
		print += putchar_warped(va_arg(arg, int));
	else if (flag == 's')
		print += putstr_warped(va_arg(arg, char *));
	else if (flag == 'p')
		print += print_pointer(va_arg(arg, void *));
	else if (flag == 'd' || flag == 'i')
		print += putnbr_warped(va_arg(arg, int));
	else if (flag == 'u')
		print += putnbr_base(va_arg(arg, unsigned int), "0123456789");
	else if (flag == 'x')
		print += putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (flag == 'X')
		print += putnbr_base(va_arg(arg, unsigned int), "0123456789ABCEDF");
	else if (flag == '%')
	{
		ft_putchar_fd('%', 1);
		print += 1;
	}
	return (print);
}
