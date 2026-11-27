#include "../include/push_swap.h"

void	trop_grand_tavu(t_all *all, int *stack_tmp)
{
	int	i;
	int	j;
	int	count;
	int	counter;

	i = 0;
	j = 0;
	while (i < all->tsa)
	{
		count = 0;
		counter = 0;
		while (count < all->tsa)
		{
			if (all->stack_a[j] > all->stack_a[count])
				counter++;
			count++;
		}
		stack_tmp[j] = counter;
		j++;
		i++;
	}
}

void	medium_algo(t_all *all)
{
	int	i;
	int	*stack_tmp;

	stack_tmp = malloc(sizeof(int) * all->n_args);
	if (!stack_tmp)
		return ;
	i = 0;
	trop_grand_tavu(all, stack_tmp);
	while (i < all->tsa)
	{
		all->stack_a[i] = stack_tmp[i];
		i++;
	}
	free(stack_tmp);
	medium_algo_chunks_based(all);
}

void	calc_chunk(t_all *all)
{
	int	i;

	i = 1;
	while (i * i <= all->n_args)
		i++;
	all->nb_chunks = i - 1;
	all->chunk_size = (all->n_args + all->nb_chunks - 1) / all->nb_chunks;
}

int	is_min_in_chunk(t_all *all, int j)
{
	int	i;
	int	min;

	i = 0;
	min = all->stack_a[all->fa];
	while (i < all->tsa)
	{
		if (min < j * all->chunk_size)
			return (i);
		i++;
		min = all->stack_a[all->fa + i];
	}
	return (0);
}
