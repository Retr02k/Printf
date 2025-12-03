/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:12:04 by psilva-p          #+#    #+#             */
/*   Updated: 2025/12/03 18:14:23 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

# define DEC "0123456789"
# define HEX "0123456789abcdef"
# define HEX_CAP "0123456789ABCEDF"
# define BIT_MASK 0x00000000ffffffff

typedef enum e_type
{
	POINTER,
	NB,
	STR,
}	t_type;

int	ft_printf(const char *s, ...);

#endif
