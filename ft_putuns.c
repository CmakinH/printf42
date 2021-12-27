/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrenzy <lfrenzy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:59:56 by lfrenzy           #+#    #+#             */
/*   Updated: 2021/12/27 15:59:57 by lfrenzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n, int *res)
{
	if (n > 9)
	{
		ft_putuns(n / 10, res);
		ft_putuns(n % 10, res);
	}
	else
		ft_putchar(n + 48, res);
	return (*res);
}
