/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:08:53 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 13:56:20 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	len = ft_strlen(s);
	if (!s)
		return (0);
	while (i < len)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (len);
}
