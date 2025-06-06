/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <lupayet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:36:29 by lupayet           #+#    #+#             */
/*   Updated: 2025/06/04 13:06:11 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	print_c(int c);
int	print_s(char *s);
int	print_p(void *p);
int	print_np(uintptr_t n);
int	print_n(long n, int base, char *basec);

#endif
