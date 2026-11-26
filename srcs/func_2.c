/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:09:47 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/26 11:43:37 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_all *all)
{
	int	newtmp;
	int	i;

	if (all->tsa < 2)
		return ;
	newtmp = all->stack_a[all->fa];
	i = 0;
	while (i < all->tsa - 1)
	{
		all->stack_a[all->fa + i] = all->stack_a[all->fa + i + 1];
		i++;
	}
	all->stack_a[all->fa + i] = newtmp;
	all->counterp += 1;
	//printf("ra\n");
	return ;
}

void	rb(t_all *all)
{
	int	newtmp;
	int	i;

	if (all->tsb < 2)
		return ;
	newtmp = all->stack_b[all->fb];
	i = 0;
	while (i < all->tsb - 1) 
	{
		all->stack_b[all->fb + i] = all->stack_b[all->fb + i + 1];
		i++;
	}
	all->stack_b[all->fb + i] = newtmp;
	all->counterp += 1;
	//printf("rb\n");
	return ;
}

void	rr(t_all *all)
{
	ra(all);
	rb(all);
}
