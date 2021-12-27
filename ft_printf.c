/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrenzy <lfrenzy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:58:55 by lfrenzy           #+#    #+#             */
/*   Updated: 2021/12/27 15:58:57 by lfrenzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_choose(const char *s, va_list ap, int *res)
{
	if (*s == 'c')
		ft_putchar(va_arg(ap, int), res);
	else if (*s == 's')
		ft_putstr(va_arg(ap, char *), res);
	else if (*s == 'd' || *s == 'i')
		ft_putdec(va_arg(ap, int), res);
	else if (*s == 'u')
		ft_putuns(va_arg(ap, unsigned int), res);
	else if (*s == 'x')
		ft_puthex((unsigned int)va_arg(ap, unsigned long long int), res);
	else if (*s == 'X')
		ft_puthup((unsigned int)va_arg(ap, unsigned long long int), res);
	else if (*s == 'p')
		ft_putpnt(va_arg(ap, unsigned long long int), res);
	else if (*s == '%')
		ft_putchar('%', res);
	return (*res);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		res;

	res = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			res = print_choose(++str, ap, &res);
		else
			ft_putchar(*str, &res);
		str++;
	}
	va_end(ap);
	return (res);
}
