/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:49:00 by mafouche             #+#    #+#             */
/*   Updated: 2026/11/18 12:43:48 by mafouche         ###   ########.fr       */
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