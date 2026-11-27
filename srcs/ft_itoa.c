/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:25:24 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/27 18:42:42 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	aa_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*aa_strcat(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	str[i] = c;
	str[i + 1] = '\0';
	return (str);
}

static char	*aa_putnumber(long n, char *str)
{
	char	c;

	if (n < 0)
	{
		n = n * -1;
		aa_strcat('-', str);
	}
	if (n > 9)
		aa_putnumber(n / 10, str);
	c = (n % 10) + '0';
	aa_strcat(c, str);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	w;

	w = n;
	len = aa_nbrlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (w == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (str);
	}
	str[0] = '\0';
	str = aa_putnumber(w, str);
	return (str);
}
