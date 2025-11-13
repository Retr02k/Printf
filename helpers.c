/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:51:58 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/13 21:37:00 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	putnbr_base(unsigned int nb, char *base)
{
	char	buffer[12];
	int		i;
	int		base_len;
	
	if (nb == 0)
	{
		ft_putchar_fd('0', 1);
		return ;
	}
	i = 0;
	base_len = ft_strlen(base);
	while (nb > 0)
	{
		buffer[i++] = base[nb % base_len];
		nb /= base_len;
	}
	while (--i >= 0)
		ft_putchar_fd(buffer[i], 1);
}
