/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 05:40:54 by marolive          #+#    #+#             */
/*   Updated: 2022/07/04 15:39:40 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf_arg(int c, va_list ar)
{
    if (c == '%') //PORCENTAGEM
        return (ft_putchar(c));
    else if (c == 'c') //CARACTER
        return (ft_putchar(va_arg(ar, int)));
    else if (c == 's') //STRING
        return (ft_putstr(va_arg(ar, char *)));
    else if (c == 'd' || c == 'i') //DECIMAL COM SINAL
        return (ft_putnbr(va_arg(ar, int)));
    else if (c == 'u') //DECIMAL SEM SINAL
        return (ft_uputnbr(va_arg(ar, unsigned int)));
    else if (c == 'x' || c == 'X') //HEXADECIMAL
    {
        if (c == 'X')
            return (put_hexa(va_arg(ar, unsigned int), "0123456789ABCDEF"));
        else
            return (put_hexa(va_arg(ar, unsigned int), "0123456789abcdef"));
    }
    if (c == 'p') //ENDEREÇO DE PONTEIRO
        return (ft_putstr("0x") + ft_pointer(va_arg(ar, unsigned long *),
				"0123456789abcdef"));
    else
        return (0);
}

int	ft_printf(const char *st, ...)
{
    va_list a;
    int     i;
    int     j;

    i = 0;
    j = 0;
    va_start(a, st);

    while (st[i])
    {
        if (st[i] == '%' && ft_strchr("cspdiuxX%", st[i + 1]))
        {
            j = j + ft_printf_arg(st[i], a);
            i++;
        }
        else
            j = j + ft_putchar(st[i]);
        i++;
    }
    va_end(a);
    return (j);
}

