/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <lupayet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:49:35 by lupayet           #+#    #+#             */
/*   Updated: 2025/06/02 23:27:31 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(int c)
{
	return (write(1, &c, 1));
}

int	print_s(char *s)
{
	int c;

	c = 0;
	while (*s)
	{
		write(1, s++, 1);
		c++;
	}
	return (c);
}

int	print_p(void *p)
{
	if (!p)
		return (print_s("(nil)"));
	return(print_n((long)p, 16));
}

int	print_n(long n, int base)
{
	int c;
	char *basec;

	c = 0;
	basec = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_n(-n, base) + 1);
	}
	if (n < base)
		return (write(1, &basec[n], 1));
	else
	{
		c += print_n(n / base, base);
		return (c + print_n(n % base, base));
	}
}
/*
int	print_u(unsigned int u)
{
	return 1;
}
*/
int	print_x(long x)
{
	return (print_n(x, 16));
}

int	print_X(long X)
{
	int c;
	char *basec;

	c = 0;
	basec = "0123456789ABCDEF";
	if (X < 0)
	{
		write(1, "-", 1);
		return (print_X(-X) + 1);
	}
	if (X < 16)
		return (write(1, &basec[X], 1));
	else
	{
		c += print_X(X / 16);
		return (c + print_X(X % 16));
	}
}
