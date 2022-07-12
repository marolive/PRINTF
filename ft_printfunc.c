/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:12:11 by marolive          #+#    #+#             */
/*   Updated: 2022/07/11 15:13:29 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int len;

	len = 0;
	if (!s)
	{
		wirte (1, "(null)", 6);
		return (6);
	}
	while (s[len])
		len++;
	write (1, s, len);
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str && *str != (unsigned char)c)
		str++;
	if (*str == (unsigned char)c)
		return (str);
	return (0);
}
