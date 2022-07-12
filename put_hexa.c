/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:40:28 by marolive          #+#    #+#             */
/*   Updated: 2022/07/07 00:47:48 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int get_num(int n)
{
	int num;

	num = 1;
	while (1)
	{
		n /= 16;
		if (n == 0)
			return (num);
		num *= 16;
	}
}

static int count(int n)
{
	int res;

	res = 0;
	if (n < 0)
		res++;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		res++;
	}
	return (res)
}
int uputnbr(int n)
{
	int j;
	int nu;

	nu = get_num(n);
	while (1)
	{
		j = n / nu + '0';
		ft_putchar(j);
		n %= nu;
		nu /= 16;
		if (nu == 0)
			break ;
	}
}

