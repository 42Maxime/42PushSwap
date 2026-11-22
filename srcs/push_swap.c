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
	t_all	all;

	if (ft_protect(ac, av) != 1)
		return (0);
	init_all(&all, ac, av);
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