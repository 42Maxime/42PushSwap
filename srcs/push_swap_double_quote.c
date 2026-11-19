///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   push_swap.c                                        :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2026/11/18 11:06:59 by mafouche          #+#    #+#             */
///*   Updated: 2026/11/19 12:36:51 by viroy            ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */

//#include "../include/push_swap.h"

//int	ft_strcmp(char *s1, char *s2)
//{
//	int	i;
//	int	j;

//	i = 0;
//	j = 0;
//	while (s1[i] == s2[j] && s1[i] != '\0' && s2[j] != '\0')
//	{
//		i++;
//		j++;
//	}
//	return (s1[i] - s2[j]);
//}

//int	sort_flags(char *argv)
//{
//	if (ft_strcmp(argv, "--simple") == 0)
//		return (FLAG_SIMPLE);
//	else if (ft_strcmp(argv, "--medium") == 0)
//		return (FLAG_MEDIUM);
//	else if (ft_strcmp(argv, "--complex") == 0)
//		return (FLAG_COMPLEX);
//	else if (ft_strcmp(argv, "--adaptative") == 0)
//		return (FLAG_ADAPTATIVE);
//	else if (ft_strcmp(argv, "--bench") == 0)
//		return (FLAG_BENCH);
//	return (-1);
//}

//int	know_flags(int args)
//{
//	if (args > 0 && args < 2)
//		return (1);
//	else if (args > 1 && args < 3)
//		return (2);
//	return (0);
//}

//int	check_args_validity(char *argv)
//{
//	int	i;

//	i = 0;
//	while (argv[i])
//	{
//		if (argv[i] == '-')
//		{
//			if ((i > 0 && argv[i - 1] != ' ') || ft_isdigit(argv[i + 1]) == 0)
//				return (1);
//		}
//		else if ((ft_isdigit(argv[i]) == 0) && argv[i] != ' ')
//			return (1);
//		i++;
//	}
//	return (0);
//}

//int	check_doublon(int *tab, int size)
//{
//	int	i;

//	i = 0;
//	while (tab[i])
//	{
//		if (tab[size] == tab[i] && size != i)
//			return (1);
//		i++;
//	}
//	return (0);
//}

//int	main(int argc, char **argv)
//{
//	int		i;
//	long	nbr;
//	int		args;
//	int		num_flags;
//	int		flags_type;
//	char	**tab;
//	int		*tabnbr;
//	int		j;

//	i = 0;
//	args = argc - 2; // MQ : permet de savoir le nombre de flags qu'il y a
//	if (argc < 2)
//		return (printf("Error\n\n[DEBUG] - No argument has been given"), 0);
//	if (args > 0)
//	{
//		num_flags = know_flags(args);
//		if (num_flags == 0)
//			return (printf("Error\n\n[DEBUG] - Error too much flags"), 0);
//		while (i < args)
//		{
//			flags_type = sort_flags(argv[i + 1]);
//			if (flags_type == -1)
//				return (printf("Error\n\n[DEBUG] - Invalid flags type given"), 0);
//			printf("[FLAGS_TYPE] : %d\n", flags_type);
//			printf("\n");
//			i++;
//		}
//	}
//	if (check_args_validity(argv[argc - 1]) == 1)
//		return (printf("Error\n\n[DEBUG] - Invalid string of number given (number only is allowed)"), 0);
//	i = 0;
//	tab = ft_split(argv[argc - 1], 32);
//	while (tab[i])
//		i++;
//	tabnbr = malloc(sizeof(int) * i);
//	if (!tabnbr)
//		return (printf("Error malloc"), 0);
//	i = 0;
//	while (tab[i])
//	{
//		nbr = ft_atoi(tab[i]);
//		if (nbr == 30000000000)
//			return (printf("Error overflow"), 0);
//		tabnbr[i] = nbr;
//		free(tab[i]);
//		i++;
//	}
//	free(tab);
//	j = 0;
//	while (j < i)
//	{
//		if (check_doublon(tabnbr, j) == 1)
//			return (free(tabnbr), printf("Error\n\n[DEBUG] - There is a doublon in your string. Please check twice before running it ;)"), 0);
//		j++;
//	}
//	j = 0;
//	while (j < i) // MA : printf pour afficher nos nombres via le tab de long
//	{
//		printf("[#%d] : %d\n", j, tabnbr[j]);
//		j++;
//	}
//	free(tabnbr);
//	printf("\n[SUCCESS] - Program finished correctly\n");
//	return (0);
//}
