/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:49:00 by viroy             #+#    #+#             */
/*   Updated: 2026/11/18 12:43:48 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*int	main(int argc, char **argv)
{
	char	**tabnbr;
	char	c;
	int	nbr;
	int	i;
	int	j;
	
	i = 1;
	if (argc == 1)
	{
		printf("ERROR NO ARGUMENT");
		return (-1);
	}
	while (argv[i])
	{
		j = 1;
		while (argv[i][j - 1] && argv[i][j])
		{
			c = argv[i][j - 1];
			if ((ft_isdigit(c) == 0 && c != 32 && c != '-') || (c == '-'
				&& ft_isdigit(argv[i][j] == 0)))
			{
				printf("ERROR ARGUMENT IS NOT A NUMBER");
				return (-1);
			}
			j++;
		}
		i++;		
	}
	i = 0;
	j = 1;
	if (argc == 2)
	{
		tabnbr = ft_split(argv[1], 32);
		while (tabnbr[i])
		{
			nbr = ft_atoi(tabnbr[i]);
			printf("Nombre %d : %d\n", i, nbr);
			free(tabnbr[i]);
			i++;
		}
		free(tabnbr);
	}
	else
	while (j < argc)
	{
		nbr = ft_atoi(argv[j]);
		if (nbr >= 2147)
		printf("Nombre %d : %d\n", j, nbr);
		j++;
	}
	return (0);
}*/