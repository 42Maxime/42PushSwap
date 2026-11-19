/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:30:15 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 15:39:53 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>
# define MY_INT_MAX 2147483647
# define MY_INT_MIN -2147483648
# define FLAG_SIMPLE 1
# define FLAG_MEDIUM 2
# define FLAG_COMPLEX 4
# define FLAG_ADAPTATIVE 8
# define FLAG_BENCH 16

size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *nptr);
int		ft_isd(char c);
int		ft_printf(const char *format, ...);
int		ft_hex_low(unsigned long c, char *base, int *pc);
int		ft_h(unsigned long c, char *base, int *pc);
int		ft_print_unsigned_int(unsigned int n, int fd, int *pc);
int		ft_hl(unsigned int c, char *base, int *pc);
int		ft_hu(unsigned int c, char *base, int *pc);
int		ft_putchar_fd(int i, int fd);
int		ft_putnbr_fd(int nl, int fd, int *pc);
int		ft_putstr_fd(char *s, int fd);
int		n_args(char **av);

typedef	struct		s_all
{
	int				i;
}					t_all;

#endif