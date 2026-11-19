/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:29:03 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/19 15:40:39 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int n_args(char **av)
{
    int i;
	int	j;
	int	count;

    i = 1;
	j = 0;
	count = 0;
    while (av[i])
    {
		while (av[i][j])
		{
        	if (ft_isd(av[i][j]) == 1 || (av[i][j] == '-' && av[i + 1][j] == ft_isd(av[i + 1][j])))
				count++;
			j++;
		}
		i++;
    }
    return (count);
}