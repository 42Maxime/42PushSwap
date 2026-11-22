/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:57:36 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 14:22:46 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_protect(int ac, char **av)
{
	if (ac < 2 || ac > MY_INT_MAX)
		return (printf("Mauvais nombre d'arguments"), 0);
	while (ac > 1)
	{
		if (!(av[ac][0] == '-' || ft_isd(av[ac][0]) == 1))
			return (printf("Argument incorrect"), 0);
		if (av[ac][0] == '-' && !(av[ac][1] == '-' || ft_isd(av[ac][1]) == 1))
			return (printf("Argument incorrect"), 0);
		ac--;
	}
	return (1);
}
