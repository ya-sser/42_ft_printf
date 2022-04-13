/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 04:57:07 by ybachaki          #+#    #+#             */
/*   Updated: 2021/12/09 03:11:01 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (*(s + i))
		{
			ft_putchar(*(s + i));
			i++;
		}
	}
	else
		ft_putstr("(null)");
}

void	ft_putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int	count(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

void	to_hexa(unsigned long nbr, int type)
{
	int					i;
	char				*ptr;

	i = 0;
	i = count(nbr);
	ptr = malloc(i + 1);
	if (!ptr)
		return ;
	*(ptr + i--) = 0;
	while (i >= 0)
	{
		if (nbr % 16 < 10)
			*(ptr + i--) = nbr % 16 + 48;
		else
			*(ptr + i--) = nbr % 16 + type;
		nbr /= 16;
	}
	ft_putstr(ptr);
	free(ptr);
}
