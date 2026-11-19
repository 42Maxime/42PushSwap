/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:10:48 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 13:59:59 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_print_unsigned_int(unsigned int n, int fd, int *pc)
{
	if (n > 9)
		ft_print_unsigned_int(n / 10, fd, pc);
	*pc += 1;
	ft_putchar_fd(((n % 10) + 48), fd);
	return (*pc);
}
