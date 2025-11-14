/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:51:58 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/14 19:13:48 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	putnbr_base(unsigned long nb, char *base)
{
	char	buffer[20];
	int		i;
	int		count;
	int		base_len;
	
	if (nb == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	i = 0;
	base_len = ft_strlen(base);
	while (nb > 0)
	{
		buffer[i++] = base[nb % base_len];
		nb /= base_len;
	}
	count = i;
	while (--i >= 0)
		ft_putchar_fd(buffer[i], 1);
	return (count);
}

int	putchar_warped(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int putstr_warped(char *str)
{
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	count_digits(int n)
{
	int count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

int	putnbr_warped(int n)
{
	ft_putnbr_fd(n, 1);
	return (count_digits(n));
}

int	print_pointer(void *ptr)
{
	unsigned long	addr;
	int				count;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	addr = (unsigned long)ptr;
	count = putnbr_base(addr, "0123456789abcdef");
	return(2 + count);
}