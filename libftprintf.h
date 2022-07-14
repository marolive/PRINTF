/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:04:27 by marolive          #+#    #+#             */
/*   Updated: 2022/07/13 23:51:25 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *st, ...);
int		ft_putnbr(int n);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int     ft_pointer(unsigned long n, char c);
int     ft_put_hexa(unsigned int n, char c);
int     ft_putnbr_u(unsigned int n);

#endif
