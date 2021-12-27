/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrenzy <lfrenzy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:59:29 by lfrenzy           #+#    #+#             */
/*   Updated: 2021/12/27 15:59:30 by lfrenzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long int n, int *res)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, res);
		ft_puthex(n % 16, res);
	}
	else if (n > 9 && n < 16)
		ft_putchar(n % 10 + 97, res);
	else
		ft_putchar(n % 10 + 48, res);
	return (*res);
}
