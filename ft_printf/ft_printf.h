/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:18:28 by ybachaki          #+#    #+#             */
/*   Updated: 2021/12/02 04:29:17 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<stdarg.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(long n);
void	type(char c, va_list p);
int		ft_printf(const char *s, ...);
void	to_hexa(unsigned long n, int type);
#endif
