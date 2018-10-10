/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:14:10 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/10 13:43:27 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

#define TEST1 "%s %c %d %i %o %u %x %p\n", ptr, 7, INT_MIN, INT_MAX, INT_MIN, INT_MIN, INT_MIN, ptr
#define TEST2 "%s %c %d %i %o %u %x %p\n", NULL, 353, -21, 42, 0721, -1, UINT_MAX, NULL

#include "b_libft.h"
int		main()
{
	char *ptr = "Well howdy there pardner";
	printf("%d\n", printf(TEST1));
	printf("%d\n", ft_printf(TEST1));
	printf("%d\n", printf(TEST2));
	printf("%d\n", ft_printf(TEST2));
	return (0);
}
