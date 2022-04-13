/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 07:40:18 by ybachaki          #+#    #+#             */
/*   Updated: 2021/12/11 01:18:58 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	g_count;

void	ft_putchar(char c)
{
	if (write(1, &c, 1))
		g_count++;
}

void	type(char c, va_list p)
{
	if (c == 'c')
		ft_putchar(va_arg(p, int));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(p, int));
	else if (c == 's')
		ft_putstr(va_arg(p, char *));
	else if (c == '%')
		ft_putchar('%');
	else if (c == 'u')
		ft_putnbr(va_arg(p, unsigned int));
	else if (c == 'x')
		to_hexa(va_arg(p, unsigned int), 87);
	else if (c == 'X')
		to_hexa(va_arg(p, unsigned int), 55);
	else if (c == 'p')
	{
		ft_putstr("0x");
		to_hexa(va_arg(p, unsigned long), 87);
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	p;
	int		i;

	i = 0;
	g_count = 0;
	va_start(p, s);
	while (*(s + i))
	{
		if (*(s + i) == '%')
		{
			i++;
			type(*(s + i), p);
		}
		else
			ft_putchar(*(s + i));
		i++;
	}
	va_end(p);
	return (g_count);
}
