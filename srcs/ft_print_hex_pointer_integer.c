/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_pointer_integer.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:41:22 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/27 18:42:07 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_print_integer(int i, int *p)
{
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (i < 0)
	{
		i *= -1;
		ft_putchar_fd('-', 1);
		*p += 1;
	}
	if (i > 9)
		ft_print_integer(i / 10, p);
	*p += 1;
	ft_putchar_fd((i % 10) + '0', 1);
	return (*p);
}

int	ft_print_unsigned_decimal(unsigned int i, int *p)
{
	if (i > 9)
		ft_print_unsigned_decimal((i / 10), p);
	*p += 1;
	ft_putchar_fd((i % 10) + '0', 1);
	return (*p);
}

int	ft_print_hex(unsigned int n, char *base, char c, int *p)
{
	unsigned int		i;
	unsigned int		j;
	char				*base2;

	base2 = "0123456789ABCDEF";
	i = ft_strlen(base);
	j = ft_strlen(base2);
	if (c == 'x')
	{
		if (n >= i)
			ft_print_hex(n / i, base, c, p);
		*p += 1;
		ft_putchar_fd(base[n % i], 1);
	}
	else if (c == 'X')
	{
		if (n >= i)
			ft_print_hex(n / j, base2, c, p);
		*p += 1;
		ft_putchar_fd(base2[n % j], 1);
	}
	return (*p);
}

int	ft_print_pointer(unsigned long n, char *base, int *p, int w)
{
	unsigned long	i;

	if (w <= 0)
	{
		if (ft_check_nil(n, p) == 1)
			return (5);
	}
	i = ft_strlen(base);
	if (n >= i)
		ft_print_pointer(n / i, base, p, (w + 1));
	*p += 1;
	ft_putchar_fd(base[n % i], 1);
	return (*p);
}

int	ft_check_nil(unsigned long n, int *p)
{
	if (n == 0)
	{
		ft_print_string("(nil)");
		return (1);
	}
	else
	{
		ft_print_string("0x");
		*p += 2;
		return (0);
	}
}
