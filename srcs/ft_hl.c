/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:05:53 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 14:00:07 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_hl(unsigned int c, char *base, int *pc)
{
	unsigned int	i;

	i = ft_strlen(base);
	if (c >= i)
		ft_hl(c / i, base, pc);
	*pc += 1;
	ft_putchar_fd(base[c % i], 1);
	return (*pc);
}
