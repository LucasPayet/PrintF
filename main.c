/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:58:54 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/21 13:49:12 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char	c = 'c';
	char	s[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	int		i = 42;
	int		ni = -42;
	
	printf(" => %d\n", printf("char : %c", c));

	printf(" => %d\n", printf("str  : %s", s));

	printf(" => %d\n", printf("ptr  : %p", s));

	printf(" => %d\n", printf("dec  : %d", i));

	printf(" => %d\n", printf("int  : %i", i));
	
	printf(" => %d\n", printf("-int : %i", ni));

	printf(" => %d\n", printf("udec : %u", i));

	printf(" => %d\n", printf("x    : %x", i));

	printf(" => %d\n", printf("X    : %X", i));

	printf(" => %d\n", printf("%%    : %%"));

	printf("BONUS\n");

	printf("%020dlol", i);
}
