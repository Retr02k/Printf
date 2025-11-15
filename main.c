/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:14:53 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/15 20:14:00 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main()
{
	char	c = 'a';
	char 	s[] = "Hello World!";
	int		d = 23;
	int		i = 456621;
	char	*ptr = &c;

	ft_printf("%c\n", c);
	printf("%c\n", c);
	ft_printf("%s\n", s);
	printf("%s\n", s);
	ft_printf("%d\n", d);
	printf("%d\n", d);
	ft_printf("%i\n", i);
	printf("%i\n", i);
	ft_printf("%u\n", i);
	printf("%u\n", i);
	ft_printf("%x\n", i);
	printf("%x\n", i);
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
	ft_printf("%%\n", c);
	printf("%%\n");

	// int	count = ft_printf("Hello World");
	// ft_printf("\ncharacters printed: %d\n", count);
}