/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:45:36 by viroy             #+#    #+#             */
/*   Updated: 2026/11/20 11:55:54 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_flag_parser(int ac, char *av)
{
	while (ac > 1)
	{
		if (av[ac][1] == '-')
		{
			if (ft_strcmp(av[ac], "--simple") == 0)
				return (FLAG_SIMPLE);
			else if (ft_strcmp(av[ac], "--medium") == 0)
				return (FLAG_MEDIUM);
			else if (ft_strcmp(av[ac], "--complex") == 0)
				return (FLAG_COMPLEX);
			else if (ft_strcmp(av[ac], "--adaptative") == 0)
				return (FLAG_ADAPTATIVE);
			else if (ft_strcmp(av[ac], "--bench") == 0)
				return (FLAG_BENCH);
		}
		ac--;
	}
	return (-1);
}
