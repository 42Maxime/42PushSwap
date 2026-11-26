/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:09:52 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/25 18:25:27 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

float	compute_disorder(t_all *all)
{
	float	mistakes;
	float	total_pairs;
	int	i;

	i = 1;
	mistakes = 0;
	total_pairs = 0;
	while (i < all->tsa)
	{
		if (all->stack_a[i] < all->stack_a[i - 1])
			mistakes += 1;
		total_pairs += 1;
		i++;
	}
	return (mistakes / total_pairs);
}
