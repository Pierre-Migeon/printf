/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_libft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:54:34 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/04 16:04:49 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_LIBFT_H
# define B_LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_router(char c, va_list params);
int		ft_itoabase(long long input, int base);
int		ft_isflag(char c);
int		ft_lputstr(const char *str);
int		ft_lputchar(char c);
int		ft_numlen(int num, int base);
void	ft_putstr(char *str, int i);
size_t	ft_strlen(const char *s);

#endif
