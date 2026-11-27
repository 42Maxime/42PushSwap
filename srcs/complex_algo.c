/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 18:38:06 by viroy             #+#    #+#             */
/*   Updated: 2026/11/27 17:01:32 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_max_bites(t_all *all)
{
	int	position;
	int	max_bites;

	position = 1;
	max_bites = all->n_args - 1;
	while (max_bites > 1)
	{
		max_bites >>= 1;
		position++;
	}
	return (position);
}
void	complex_algo(t_all *all)
{
	int	i;
	int	*stack_tmp;

	stack_tmp = malloc(sizeof(int) * all->n_args);
	if (!stack_tmp)
		return ;
	i = 0;
	trop_grand_tavu(all, stack_tmp);
	while (i < all->tsa)
	{
		all->stack_a[i] = stack_tmp[i];
		i++;
	}
	free(stack_tmp);
	radix(all);
}

void	radix(t_all *all)
{
	int	i;
	int	j;
	int	x;
	int	copy;

	j = -1;
	i = find_max_bites(all);
	while (i > 0)
	{
		j += 1;
		x = 0;
		while (x < all->n_args)
		{
			copy = all->stack_a[all->fa];
			if (((copy >> j) & 1) == 0)
				pb(all);
			else
				ra(all);
			x++;
		}
		i--;
		while (all->tsb > 0)
			pa(all);
	}
}
