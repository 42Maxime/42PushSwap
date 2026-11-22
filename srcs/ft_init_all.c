/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 02:06:45 by marvin            #+#    #+#             */
/*   Updated: 2026/11/22 02:06:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_all(t_all *all, int ac, char **av)
{
	all->n_args = ft_flag_nbr(ac, av);
	all->stack_a = malloc(sizeof(int) * all->n_args);
	if (!all->stack_a)
		return ;
	all->stack_b = malloc(sizeof(int) * all->n_args);
	if (!all->stack_b)
		return ;
	all->tsa = 0;
	all->tsb = all->n_args;
	all->sa = all->n_args;
	all->sb = 0;
	all->bench = 0;
	all->flag_type = 0;
}
