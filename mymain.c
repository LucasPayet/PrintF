/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mymain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:58:54 by lupayet           #+#    #+#             */
/*   Updated: 2025/06/04 11:49:41 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
int	main()
{
	char	c = 'c';
	//char	s[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	char	*s = NULL;
	int		i = 42;
	int		ni = -42;

	ft_putchar_fd(c, 1);
	printf(" => %d\n", printf("char : %c", c));
	ft_printf(" => %d\n", ft_printf("char : %c", c));

	printf(" => %d\n", printf("str  : %s", s));
	ft_printf(" => %d\n", ft_printf("str  : %s", s));

	printf(" => %d\n", printf("ptr  : %p", s));
	ft_printf(" => %d\n", ft_printf("ptr  : %p", s));

	printf(" => %d\n", printf("dec  : %d", i));
	printf(" => %d\n", printf("dec  : %d", i));


	printf(" => %d\n", printf("int  : %i", i));
	ft_printf(" => %d\n", ft_printf("int  : %i", i));
	
	printf(" => %d\n", printf("-int : %i", ni));
	ft_printf(" => %d\n", ft_printf("-int : %i", ni));


	printf(" => %d\n", printf("udec : %u", i));
	ft_printf(" => %d\n", ft_printf("udec : %u", i));

	printf(" => %d\n", printf("x    : %x", i));
	ft_printf(" => %d\n", ft_printf("x    : %x", i));

	printf(" => %d\n", printf("X    : %X", i));
	ft_printf(" => %d\n", ft_printf("X    : %X", i));

	printf(" => %d\n", printf("%%    : %%"));
	ft_printf(" => %d\n", ft_printf("%%    : %%"));

	printf(" => %d\n", printf(" %p %p ", LONG_MIN));
	ft_printf(" => %d\n", ft_printf(" %p %p ", LONG_MIN));
}
