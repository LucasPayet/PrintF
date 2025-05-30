/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:35:20 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/30 18:07:42 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	is_specifier(char c, char *s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

int	ft_printf(const char *arg, ...)
{
	int	count;
	va_list args;

	count = 0;
	va_start(args, arg);

	while (*arg)
	{
		if (*arg != '%')
		{
			ft_putchar(*arg);
			count++;
		}
		else
		{
			arg++;
			if (is_specifier(arg, "cspdiuxX%"))
			{
				ft_putchar('%');
				count++;
			}

		}
	}
}
