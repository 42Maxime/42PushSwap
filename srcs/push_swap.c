/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:30:20 by viroy             #+#    #+#             */
/*   Updated: 2026/11/20 11:57:17 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	//long	nbr;
	int		n_args;
	int		flag_type;
	int		*stack_a;
	int		j;

	if (ft_protect(ac, av) != 1)
		return (0);
	i = 1;
	n_args = ft_flag(ac, av);
	flag_type = ft_flag_parser(ac, av);
	stack_a = malloc(sizeof(int) * n_args);
	if (!stack_a)
		return (0);
	//Boucle while ci-dessous remplacee par ft_flag_parser et ft_flag_nbr
	//while (av[i])
	//{
	//	if (ft_flag(ac, av) == 0)
	//	{
	//		nbr = ft_atoi(av[i]);
	//		stack_a[j] = nbr;
	//		j++;
	//	}
	//	else if (ft_flag(ac, av) == 1)
	//		flag_type = ft_flag_parser(av[i]);
	//}
}