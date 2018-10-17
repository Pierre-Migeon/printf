/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:46:24 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/11 14:20:40 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

int		ft_isflag(char c)
{
	return (c == 's' || c == 'c' ||
			c == 'd' || c == 'i' ||
			c == 'p' || c == 'o' ||
			c == 'u' || c == 'x');
}

int		ft_lputstr(const char *str)
{
	int i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
		i++;
	write(1, str, i);
	return (i);
}

int		ft_lputchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int		b_printf(const char *format, ...)
{
	va_list	params;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(params, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_isflag(format[i + 1]))
			ret += ft_router(format[i + 1], params);
		else if (format[i - 1] != '%')
			ret += write(1, &format[i], 1);
		i++;
	}
	va_end(params);
	return (ret);
}
