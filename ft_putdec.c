/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrenzy <lfrenzy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:59:24 by lfrenzy           #+#    #+#             */
/*   Updated: 2021/12/27 15:59:25 by lfrenzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdec(int n, int *res)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", res);
	else if (n < 0)
	{
		ft_putchar('-', res);
		ft_putdec(-n, res);
	}
	else if (n > 9)
	{
		ft_putdec(n / 10, res);
		ft_putdec (n % 10, res);
	}
	else
		ft_putchar(n + 48, res);
	return (*res);
}
