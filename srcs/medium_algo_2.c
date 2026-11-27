#include "../include/push_swap.h"

void	choose_ra_rra(t_all *all, int j)
{
	int	i;

	i = is_min_in_chunk(all, j);
	if (i == 0)
		return ;
	if (i == all->tsa - 1)
	{
		rra(all);
		return ;
	}
	while (i > 0 && i < all->tsa)
	{
		if (i <= all->tsa / 2)
		{
			ra(all);
			i--;
		}
		if (i > all->tsa / 2)
		{
			rra(all);
			i++;
		}
	}
}

void	medium_algo_chunks_based(t_all *all)
{
	int	j;
	int	x;

	j = 1;
	calc_chunk(all);
	while (all->tsa > 0 && j <= all->nb_chunks)
	{
		x = 0;
		while (all->tsa > 0 && x < all->chunk_size)
		{
			choose_ra_rra(all, j);
			if (all->stack_a[all->fa] < j * all->chunk_size)
			{
				pb(all);
				x++;
			}
		}
		j++;
	}
	send_max_in_sa(all);
}

int	find_max(t_all *all, int max)
{
	int	i;

	i = 0;
	while (i < all->tsb && all->stack_b[all->fb + i] != max)
		i++;
	if (i == all->tsb)
		return (-1);
	return (i);
}

void	send_max_in_sa(t_all *all)
{
	int	i;

	all->sens = 0;
	all->max = all->n_args;
	while (all->tsb > 0)
	{
		i = 0;
		all->max -= 1;
		all->where = find_max(all, all->max);
		if (all->where <= all->tsb / 2)
			all->sens = 1;
		else
			all->sens = 0;
		if (all->sens == 1)
		{
			while (i++ < all->where)
				rb(all);
		}
		else if (all->sens == 0)
		{
			while (i++ < all->tsb - all->where)
				rrb(all);
		}
		pa(all);
	}
}
