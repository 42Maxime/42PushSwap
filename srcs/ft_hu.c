/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hu.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:14:08 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 14:00:03 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_hu(unsigned int c, char *base, int *pc)
{
	unsigned int	i;

	i = ft_strlen(base);
	if (c >= i)
		ft_hu(c / i, base, pc);
	*pc += 1;
	ft_putchar_fd(base[c % i], 1);
	return (*pc);
}
