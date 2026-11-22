/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:30:15 by viroy             #+#    #+#             */
/*   Updated: 2026/11/20 11:53:11 by viroy            ###   ########.fr       */
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

typedef struct s_all
{
	int			*stack_a;
	int			*stack_b;
	int			tsa;
	int			tsb;
	int			sa;
	int			sb;
	int			n_args;
	int			flag_type;
	int			bench;
}				t_all;

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
int		ft_flag_nbr(int ac, char **av);
int		ft_flag_parser(int ac, char **av);
int		ft_strcmp(char *s1, char *s2);
int		ft_protect(int ac, char **av);
//void	init_all(t_all *all, int ac, char **av);

#endif