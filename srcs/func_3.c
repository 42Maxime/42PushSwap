/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:09:44 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/27 18:39:08 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_all *all)
{
	int	newtmp;
	int	i;

	if (all->tsa < 2)
		return ;
	i = all->fa + all->tsa - 1;
	newtmp = all->stack_a[all->fa + all->tsa - 1];
	while (i > all->fa)
	{
		all->stack_a[i] = all->stack_a[i - 1];
		i--;
	}
	all->stack_a[i] = newtmp;
	all->rra_count += 1;
	all->count_all_ops += 1;
	if (all->bool == 0)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_all *all)
{
	int	newtmp;
	int	i;

	if (all->tsb < 2)
		return ;
	i = all->fb + all->tsb - 1;
	newtmp = all->stack_b[all->fb + all->tsb - 1];
	while (i > all->fb)
	{
		all->stack_b[i] = all->stack_b[i - 1];
		i--;
	}
	all->stack_b[i] = newtmp;
	all->rrb_count += 1;
	all->count_all_ops += 1;
	if (all->bool == 0)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_all *all)
{
	all->bool = 1;
	rra(all);
	rrb(all);
	all->bool = 0;
	ft_putstr_fd("rrr\n", 1);
	all->rrr_count += 1;
	all->count_all_ops += 1;
}
