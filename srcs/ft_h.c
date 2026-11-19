/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:02:32 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 14:00:16 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_h(unsigned long c, char *base, int *pc)
{
	if (c == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		*pc += ft_putstr_fd("0x", 1);
		ft_hex_low(c, base, pc);
	}
	return (*pc);
}
