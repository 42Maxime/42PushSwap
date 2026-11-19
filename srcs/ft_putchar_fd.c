/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:03:11 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 13:59:46 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_putchar_fd(int i, int fd)
{
	unsigned char	c;

	c = (unsigned char)i;
	write(fd, &c, 1);
	return (1);
}
