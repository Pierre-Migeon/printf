/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:40:28 by pmigeon           #+#    #+#             */
/*   Updated: 2018/09/21 20:49:43 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_PRINTF_H
# define B_PRINTF_H
# include <string.h>
# include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int		b_printf(const char *restrict format, ...);
int		ft_router(char c, va_list params);
int		ft_itoabase(long input, int base);
int		ft_isflag(char c);
int		ft_lputstr(const char *str);
int		ft_lputchar(char c);

#endif
