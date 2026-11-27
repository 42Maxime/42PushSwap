/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_string_percent.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:54:19 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/27 18:42:09 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_print_string(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_print_string("(null)"));
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_char(int i)
{
	char	c;

	c = (unsigned char)i;
	write(1, &c, 1);
	return (1);
}

int	ft_print_percent(char c)
{
	write(1, &c, 1);
	return (1);
}
