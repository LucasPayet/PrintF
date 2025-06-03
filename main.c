/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:54:23 by erpascua          #+#    #+#             */
/*   Updated: 2025/06/03 10:51:09 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char			c = 'A';
	char			*str = "Hello";
	int				n = -2147483648;
	unsigned int	hex = 47;

	printf("=== printf ===\n");
	printf("%d || ", printf(" Caractère	: [%c]\n", c));
	printf("%d || ", printf(" Char + Chaine : [%c] || [%s]\n", c, str));
	printf("%d || ", printf(" Chaîne : [%s]\n", str));
	printf("%d || ", printf(" Digit	: [%d]\n", 0));
	printf("%d || ", printf(" Int : [%i]\n", n));
	printf("%d || ", printf(" Ptr : [%p]\n", str));
	printf("%d || ", printf(" Unsigned : [%u]\n", n));
	printf("%d || ", printf(" Hex low : [%x]\n", hex));
	printf("%d || ", printf(" Hex upp : [%X]\n", hex));
	printf("%d", printf(0));

	printf("\n\n=== ft_printf ===\n");
	ft_printf("%d || ", ft_printf(" Caractère : [%c]\n", c));
	ft_printf("%d || ", ft_printf(" Char + Chaine : [%c] || [%s]\n", c, str));
	ft_printf("%d || ", ft_printf(" Chaîne : [%s]\n", str));
	ft_printf("%d || ", ft_printf(" Digit : [%d]\n", 0));
	ft_printf("%d || ", ft_printf(" Int : [%i]\n", n));
	ft_printf("%d || ", ft_printf(" Ptr : [%p]\n", str));
	ft_printf("%d || ", ft_printf(" Unsigned : [%u]\n", n));
	ft_printf("%d || ", ft_printf(" Hex low : [%x]\n", hex));
	ft_printf("%d || ", ft_printf(" Hex upp : [%X]\n", hex));
	ft_printf("%d", ft_printf(0));
/*
	printf("\n\n=== Functions ===\n");
	ft_printf("\nprintf_char : ");
	printf_char('A');
	ft_printf("\nprintf_str : ");
	printf_str("String");
	ft_printf("\nprintf_int : ");
	printf_int(-42);
	ft_printf("\nprintf_address : ");
	printf_address(str);
	ft_printf("\nprintf_unsigned : ");
	printf_unsigned(-42);
	ft_printf("\nprintf_hex_low : ");
	printf_hex_low(47);
	ft_printf("\nprintf_hex_upp : ");
	printf_hex_upp(47);
	printf("\n");*/
	return (0);
}

// int	main(void)
// {

// }

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("printf\t\t%c\n", av[1][0]);
// 		ft_printf("ft_printf\t%c\n", av[1][0]);
// 	}
// 	else if (ac == 3)
// 	{
// 		printf("printf\t\t%s\n", av[2]);
// 		ft_printf("ft_printf\t%s\n", av[2]);
// 	}
// }
