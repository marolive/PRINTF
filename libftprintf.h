/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:04:27 by marolive          #+#    #+#             */
/*   Updated: 2022/06/30 19:40:20 by marolive         ###   ########.fr       */
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
char	*ft_strchr(const char *s, int c);


#endif
