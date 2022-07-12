/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:21:53 by marolive          #+#    #+#             */
/*   Updated: 2022/07/07 00:47:09 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	int	get_magnitude(int n)
{
	int	mag;

	mag = 1;
	if (n < 0)
		mag = -1;
	while (1)
	{
		n /= 10;
		if (n == 0)
			return (mag);
		mag *= 10;
	}
}

static int count(int n)
{
	int res;

	res = 0;
	if (n < 0)
	{
		res++;
   		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		res ++;
	}
	return (res);
}

int	ft_putnbr(int n)
{
	int	j;
	int	mag;
	int res;

	res = caunt(n);
	mag = get_magnitude(n);
	if (n < 0)
		ft_putchar('-');
	while (1)
	{
		j = n / mag + '0';
		ft_putchar(j);
		n %= mag;
		mag /= 10;
		if (mag == 0)
			break ;
	}
	return (res);
}

