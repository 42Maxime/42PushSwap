/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:45:36 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 14:51:32 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_flag_parser(char *av)
{
	if (ft_strcmp(av, "--simple") == 0)
		return (FLAG_SIMPLE);
	else if (ft_strcmp(av, "--medium") == 0)
		return (FLAG_MEDIUM);
	else if (ft_strcmp(av, "--complex") == 0)
		return (FLAG_COMPLEX);
	else if (ft_strcmp(av, "--adaptative") == 0)
		return (FLAG_ADAPTATIVE);
	else if (ft_strcmp(av, "--bench") == 0)
		return (FLAG_BENCH);
	return (-1);
}