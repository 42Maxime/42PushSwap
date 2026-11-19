/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:29:33 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/19 15:40:04 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	long	nbr;
	int		nb_args;
	int		flag_type;
	int		*stack_a;
	int		j;

	//if (ft_protect(ac, av) != 1)
		//return (0);
	i = 1;
	nb_args = n_args(av);
	printf("%d\n", nb_args);
	stack_a = malloc(sizeof(int) * nb_args);
/*	while (av[i])
	{
		if (ft_flag(ac, av) == 0)
		{
			nbr = ft_atoi(av[i]);
			stack_a[j] = nbr;
			j++;
		}
		else if (ft_flag(ac, av) == 1)
			flag_type = ft_flag_parser(av[i]);
	}*/
	return (0);
}
