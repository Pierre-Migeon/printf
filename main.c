/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 21:03:02 by pmigeon           #+#    #+#             */
/*   Updated: 2018/09/27 14:20:46 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_libft.h"

int		main()
{
	int i; 
	char str[] = "hello";
	char str2[] = "%";
	unsigned int j;
	i = -10;
	j = 0;

printf("%d", printf("this is norm: %d\n", i));
	printf("%d", b_printf("this is mine: %d\n", i));

	printf("this is norm: %p\n", &str);
	b_printf("this is mine: %p\n", &str);
	
	printf("this is norm: %s\n", str);
	b_printf("this is mine: %s\n", str);

	printf("this is norm: %c\n", *str);
	b_printf("this is mine: %c\n", *str);
	
	printf("this is norm: %i\n", i);
	b_printf("this is mine: %i\n", i);

	printf("this is norm: %o\n", j);
	b_printf("this is mine: %o\n", j);

	printf("this is norm: %u\n", j);
	b_printf("this is mine: %u\n", j);

	printf("this is norm: %x\n", i);
	b_printf("this is mine: %x\n", i);

	printf("theirs: %s\n", str2);
	b_printf("mine: %s\n", str2);

	printf("this is norm: %%\n");
	b_printf("this is mine: %%\n");

	printf("-------------\n");

	char *z = 0; 
	printf("this is norm: %s\n", z);
	b_printf("this is mine: %s\n", z);

	char z1 = (char)NULL;
	printf("this is norm: %c\n", z1);
	b_printf("this is mine: %c\n", z1);



	return (0);
}


