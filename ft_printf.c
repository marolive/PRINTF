/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 05:40:54 by marolive          #+#    #+#             */
/*   Updated: 2022/07/13 23:56:00 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf_arg(char c, va_list ar)
{
    if (c == 'c') //CARACTER
        return (ft_putchar(va_arg(ar, int)));
    if (c == 's') //STRING
        return (ft_putstr(va_arg(ar, char *)));
    if (c == 'd' || c == 'i') //DECIMAL COM SINAL
        return (ft_putnbr(va_arg(ar, int)));
    if (c == 'u') //DECIMAL SEM SINAL
        return (ft_putnbr_u(va_arg(ar, unsigned int)));
    if (c == 'x' || c == 'X') //HEXADECIMAL
    {
        if (c == 'X')
            return (ft_put_hexa(va_arg(ar, unsigned int), c));
        else
            return (ft_put_hexa(va_arg(ar, unsigned int), c));
    }
    if (c == 'p') //ENDEREÇO DE PONTEIRO
        return (ft_putstr("0x") + ft_pointer(va_arg(ar, unsigned long), c));
    if (c == '%') //PORCENTAGEM
        return (ft_putchar(c));
    else
        return (0);
}

int	ft_printf(const char *st, ...)
{
    va_list ar;
    int     i;
    int     j;

    va_start(ar, st);
    i = 0;
    j = 0;
    while (st[i])
    {
        if (st[i] == '%')
        {
            j += ft_printf_arg(st[i + 1], ar);
            i++;
        }
        else
            j += ft_putchar(st[i]);
        i++;
    }
    va_end(ar);
    return (j);
}
