/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:09:47 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/27 18:38:59 by mafouche         ###   ########.fr       */
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
	all->ra_count += 1;
	all->count_all_ops += 1;
	if (all->bool == 0)
		ft_putstr_fd("ra\n", 1);
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
	all->rb_count += 1;
	all->count_all_ops += 1;
	if (all->bool == 0)
		ft_putstr_fd("rb\n", 1);
	return ;
}

void	rr(t_all *all)
{
	all->bool = 1;
	ra(all);
	rb(all);
	all->bool = 0;
	ft_putstr_fd("rr\n", 1);
	all->rr_count += 1;
	all->count_all_ops += 1;
}
