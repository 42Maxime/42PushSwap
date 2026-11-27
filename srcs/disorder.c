/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:09:52 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/27 14:09:03 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

float	compute_disorder(t_all *all)
{
	float	mistakes;
	float	total_pairs;
	int	i;
	int	j;

	i = 0;
	mistakes = 0;
	total_pairs = 0;
	while (i < all->tsa)
	{
		j = i + 1;
		while (j < all->tsa)
		{
			if (all->stack_a[i] > all->stack_a[j])
				mistakes += 1;
			total_pairs += 1;
			j++;
		}
		i++;
	}
	return (mistakes / total_pairs);
}
