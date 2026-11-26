/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:10:00 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/25 17:15:443 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_min_real_min(t_all *all, int min)
{
	int	i;

	i = 0;
	while (i < all->tsa)
	{
		if (min > all->stack_a[all->fa + i])
			return (1);
		i++;
	}
	return (0);
}

int	find_min_value(t_all *all)
{
	int	i;
	int	min;

	i = 0;
	min = all->stack_a[all->fa];
	while (is_min_real_min(all, min) != 0)
	{
		if (min > all->stack_a[all->fa + i])
			min = all->stack_a[all->fa + i];
		i++;
	}
	return (i - 1);
}

void	simple_algo_sort(t_all *all)
{
	int	min;
	int	x;

	while (all->tsa > 0)
	{
		min = find_min_value(all);
		x = 0;
		if (min <= all->tsa / 2)
		{
			while (x++ < min)
				ra(all);
		}
		if (min > all->tsa / 2)
		{
			while (x++ < (all->tsa - min))
				rra(all);
		}
		pb(all);
	}
	push_to_a(all);
}

void	push_to_a(t_all *all)
{
	while (all->tsb > 0)
		pa(all);
}
