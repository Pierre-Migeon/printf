/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:40:09 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/17 11:08:23 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

int		ft_router2(va_list params)
{
	int i;

	i = va_arg(params, int);
	if (i < 0)
	{
		if (i == -2147483648)
			return (ft_lputstr("-2147483648"));
		write(1, "-", 1);
		return (1 + ft_itoabase(-i, 10));
	}
	return (ft_itoabase(i, 10));
}

int		ft_router(char c, va_list params)
{
	int	i;

	i = 0;
	if (c == 's')
		return (ft_lputstr(va_arg(params, char *)));
	else if (c == 'c')
		return (ft_lputchar((char)va_arg(params, int)));
	else if (c == 'd' || c == 'i')
		return (ft_router2(params));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_itoabase((unsigned long)va_arg(params, void *), 16) + 2);
	}
	else if (c == 'o')
		return (ft_itoabase(va_arg(params, unsigned int), 8));
	else if (c == 'u')
		return (ft_itoabase(va_arg(params, unsigned int), 10));
	else if (c == 'x')
		return (ft_itoabase(va_arg(params, unsigned int), 16));
	return (0);
}

int		ft_numlen(unsigned long long num, int base)
{
	int i;

	i = 0;
	if (!num)
		return (1);
	while (num >= (unsigned long long)base)
	{
		num /= base;
		i++;
	}
	return (i + 1);
}

int		ft_itoabase(unsigned long long input, int base)
{
	int		i;
	int		size;
	char	*out;
	char	*chars;

	chars = "0123456789abcdef";
	size = ft_numlen(input, base);
	out = (char *)malloc(sizeof(char) * (size + 1));
	i = size - 1;
	while (input >= (unsigned long long)base)
	{
		out[i] = chars[input % base];
		input /= base;
		i--;
	}
	out[i] = chars[input % base];
	out[size] = '\0';
	write(1, out, size);
	free(out);
	return (size);
}
