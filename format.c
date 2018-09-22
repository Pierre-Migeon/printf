/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:40:09 by pmigeon           #+#    #+#             */
/*   Updated: 2018/09/21 21:06:27 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_libft.h"

int		ft_router(char	c, va_list params)
{
	if (c == 's')
		return (ft_lputstr(va_arg(params, char *)));
	else if (c == 'c')
		return (ft_lputchar((char)va_arg(params, int)));
	else if (c == 'd' || c== 'i')
		return (ft_itoabase(va_arg(params, int), 10));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_itoabase((unsigned long)va_arg(params, void *), 16));
	}
	else if (c == 'o')
		return (ft_itoabase(va_arg(params, int), 8));
	else if (c == 'u')
		return (ft_itoabase(va_arg(params, unsigned int), 10));
	else if (c == 'x' || c == 'X')
		return (ft_itoabase(va_arg(params, unsigned long), 16));
	else if (c == '%')
		return (ft_lputchar(c));
	return (0);
}

int		ft_numlen(int num, int base)
{
	int i;

	i = 0;
	while (num > 0)
	{
		num /= base;
		i++;
	}
	return (i);
}

void	ft_putstr(char *str, int i)
{
	while (i >= 0)
		write(1, &str[--i], 1);
}

int		ft_itoabase(long input, int base)
{
	int i;
	int remain;
	char *out;
	int sign;

	out = (char *)malloc(sizeof(char) * (ft_numlen(input, base) + 1));
	i = 0;
	if (input == 0)
		out[i++] = '0';
	sign = input;
	while (input != 0)
	{
		remain = input % base;
		if (remain < 10)
			out[i++] = (char)(remain + '0');
		else
			out[i++] = (char)(remain - 10 + 'a');
		input /= base;
	}
	if (base == 10 && sign < 0)
		out[i++] = '-';
	out[i] = '\0';
	ft_putstr(out, i);
	free (out);
	return (i);
}
