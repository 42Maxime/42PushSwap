/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:53:39 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 14:00:12 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_hex_low(unsigned long c, char *base, int *pc)
{
	unsigned int	i;

	i = ft_strlen(base);
	if (c >= i)
		ft_hex_low(c / i, base, pc);
	*pc += 1;
	ft_putchar_fd(base[c % i], 1);
	return (*pc);
}
