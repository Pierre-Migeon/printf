/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:46:24 by pmigeon           #+#    #+#             */
/*   Updated: 2018/09/22 15:13:30 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_libft.h"

int		ft_isflag(char c)
{
	return (c == 's' || c == 'c' ||
			c == 'd' || c == 'i' ||
			c == 'p' || c == 'o' ||
			c == 'u' || c == 'x' || c == 'X');
}

int		ft_lputstr(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
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
		{
			ret += ft_router(format[i + 1], params);
		}
		else if (format[i - 1] != '%')
		{
			write(1, &format[i], 1);
			ret++;
		}
		i++;
	}
	va_end(params);
	return (ret);
}
