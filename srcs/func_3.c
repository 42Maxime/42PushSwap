/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:09:44 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/26 11:43:59 by viroy            ###   ########.fr       */
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
	all->counterp += 1;
	//printf("rra\n");
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
	all->counterp += 1;
	//printf("rrb\n");
}

void	rrr(t_all *all)
{
	rra(all);
	rrb(all);
}
