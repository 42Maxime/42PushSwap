
#include "../include/push_swap.h"

void	set_all(t_all *all, int argc)
{
	all->argc_copy = argc;
	all->flag_type = get_flag(all);
	all->bench = get_bench(all);
	all->n_args = get_n_args(all);
	all->stack_a = malloc(sizeof(int) * all->n_args);
	all->stack_b = malloc(sizeof(int) * all->n_args);
	all->fa = 0;
	all->fb = all->n_args;
	all->tsa = all->n_args;
	all->tsb = 0;
	all->max = 0;
	all->where = 0;
	all->sens = 0;
	all->nb_chunks = 0;
	all->chunk_size = 0;
	all->chunk_min = 0;
	all->max_bites = 0;
	all->disorder_value = compute_disorder(all);
	all->bool = 0;
	set_all_bench_value(all);
	fill_tsa(all);
}

void	set_all_bench_value(t_all *all)
{
	all->count_all_ops = 0;
	all->sa_count = 0;
	all->sb_count = 0;
	all->ss_count = 0;
	all->pa_count = 0;
	all->pb_count = 0;
	all->ra_count = 0;
	all->rb_count = 0;
	all->rr_count = 0;
	all->rra_count = 0;
	all->rrb_count = 0;
	all->rrr_count = 0;
}

int	get_flag(t_all *all)
{
	int	i;
	size_t	j;

	i = 1;
	while (i < all->argc_copy)
	{
		j = ft_strlen(all->argv_copy[i]);
		if (strncmp(all->argv_copy[i], "--simple", j) == 0)
			return (FLAG_SIMPLE);
		if (strncmp(all->argv_copy[i], "--medium", j) == 0)
			return (FLAG_MEDIUM);
		if (strncmp(all->argv_copy[i], "--complex", j) == 0)
			return (FLAG_COMPLEX);
		if (strncmp(all->argv_copy[i], "--adaptive", j) == 0)
			return (FLAG_ADAPTIVE);
		i++;
	}
	return (0);
}

int	get_bench(t_all *all)
{

	int	i;
	size_t	j;

	i = 1;
	while (i < all->argc_copy)
	{
		j = ft_strlen(all->argv_copy[i]);
		if (strncmp(all->argv_copy[i], "--bench", j) == 0)
			return (FLAG_BENCH);
		i++;
	}
	return (0);
}

int	get_n_args(t_all *all)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < all->argc_copy)
	{
		if (ft_isdigit(all->argv_copy[i]) == 0)
			count++;
		i++;
	}
	return (count);
}

void	fill_tsa(t_all *all)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	if (all->flag_type != 0)
		i += 1;
	if (all->bench != 0)
		i += 1;
	while (j < all->tsa)
	{
		c = ft_atoi(all->argv_copy[i + 1]); // + 1 car on skip le a.out
		all->stack_a[j] = c;
		i++;
		j++;
	}
}
