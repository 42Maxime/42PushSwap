#include "../include/push_swap.h"

void	choose_smc(t_all *all)
{
	if (all->flag_type == 1)
		simple_algo(all);
	else if (all->flag_type == 2)
		medium_algo(all);
	else if (all->flag_type == 4)
		complex_algo(all);
	else if (all->flag_type == 8)
		adaptive_algo(all);
	else if (all->flag_type == 0)
		adaptive_algo(all);
	else
		// error
	return ;
}

void	call_algo(t_all *all)
{
	choose_smc(all);
}

int	main(int argc, char **argv)
{
	t_all all;
	int i;

	all.argv_copy = argv;
	set_all(&all, argc);


	while (i < all.tsa)
	{
		printf("[#%d] - %d\n", i, all.stack_a[i]);
		i++;
	}
	printf("\n\n");

	call_algo(&all);


	i = 0;
	while (i < all.tsa)
	{
		printf("[#%d] - %d\n", i, all.stack_a[i]);
		i++;
	}

	return (free(all.stack_a), free(all.stack_b), 0);
}