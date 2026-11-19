/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:31:43 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 13:56:44 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_putnbr_fd(int nl, int fd, int *pc)
{
	int		len;

	len = 0;
	if (nl == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (11);
	}
	if (nl < 0)
	{
		nl *= -1;
		*pc += 1;
		write(fd, "-", 1);
	}
	if (nl > 9)
		ft_putnbr_fd(nl / 10, fd, pc);
	*pc += 1;
	ft_putchar_fd(((nl % 10) + '0'), fd);
	return (*pc);
}
