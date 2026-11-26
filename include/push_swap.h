
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>
//# define MY_INT_MAX 2147483647
//# define MY_INT_MIN -2147483648
//# define FLAG_SIMPLE 1
//# define FLAG_MEDIUM 2
//# define FLAG_COMPLEX 4
//# define FLAG_ADAPTATIVE 8
//# define FLAG_BENCH 16

typedef	struct		s_all
{
	int				n_args;
	int				flag_type;
	int				*stack_a;
	int				*stack_b;
	int				bench;
	int				tsa;
	int				tsb;
	int				fa;
	int				fb;
	int				max;
	int				where;
	int				sens;
	int				nb_chunks;
	int				chunk_size;
	int				counterp;
	int				chunk_min;
}					t_all;

// DISORDER
float	compute_disorder(t_all *all);

// FUNCTION
void	pa(t_all *all);
void	pb(t_all *all);
void	sa(t_all *all);
void	sb(t_all *all);
void	ss(t_all *all);
void	ra(t_all *all);
void	rb(t_all *all);
void	rr(t_all *all);
void	rra(t_all *all);
void	rrb(t_all *all);
void	rrr(t_all *all);

// ALGO
void	simple_algo_ins_sort(t_all *all);
void	medium_algo_prep(t_all *all);
void	trop_grand_tavu(t_all *all, int *stack_tmp);
void	send_max_in_sa(t_all *all);
int		find_max(t_all *all, int max);
void	calc_chunk(t_all *all);
void	medium_algo_chunks_based(t_all *all);
void	simple_algo_sort(t_all *all);
void	push_to_a(t_all *all);
int		is_min_real_min(t_all *all, int min);
int		find_min_value(t_all *all);


#endif