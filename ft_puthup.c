/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrenzy <lfrenzy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:59:33 by lfrenzy           #+#    #+#             */
/*   Updated: 2021/12/27 15:59:34 by lfrenzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthup(unsigned long long int n, int *res)
{
	if (n >= 16)
	{
		ft_puthup(n / 16, res);
		ft_puthup(n % 16, res);
	}
	else if (n > 9 && n < 16)
		ft_putchar(n % 10 + 65, res);
	else
		ft_putchar(n % 10 + 48, res);
	return (*res);
}
