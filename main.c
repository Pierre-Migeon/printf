/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:10:07 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/11 16:26:19 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

#define TEST1 "%s %c %d %i %o %u %x %p\n", ptr, 7, INT_MIN, INT_MAX, INT_MIN, INT_MIN, INT_MIN, ptr
#define TEST2 "%s %c %d %i %o %u %x %p\n", NULL, 353, -21, 42, 0721, -1, UINT_MAX, NULL

#include "./includes/b_printf.h"

int		main()
{
	b_printf("mine: %o\n", INT_MIN -1);
	printf("t: %o\n", INT_MIN -1);
	b_printf("mine: %o\n", INT_MAX +1);
	printf("t: %o\n", INT_MAX +1);

	

	/*	char *ptr = "Well howdy there pardner";

	printf("%d\n", printf(TEST1));
	b_printf("%d\n", b_printf(TEST1));
	printf("%d\n", printf(TEST2));
	b_printf("%d\n", b_printf(TEST2));

	printf("%d\n", printf("word"));
	b_printf("%d\n", b_printf("word"));
*/
	return (0);
}

